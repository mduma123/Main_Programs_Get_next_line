#include <stdio.h>
#include <fcntl.h>
#include "../../../get_next_line/get_next_line.h"
#include "../../../get_next_line/libft/includes/libft.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*line;
	int		cnt;

	line = NULL;
	cnt = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd > 2)
		{
			while ((ret = get_next_line(fd, &line)) > 0)
				if (line)
				{
					printf("%d\t%s\n", cnt, line);
					cnt++;	
					ft_strdel(&line);
				}
		}
		if (line)
			ft_strdel(&line);
		close(fd);
	}
//	sleep(45);
	return (0);
}
