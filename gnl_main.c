/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dponsonb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 08:16:07 by dponsonb          #+#    #+#             */
/*   Updated: 2019/06/24 15:08:04 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	if (argc < 2)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	i = get_next_line(fd, &line);
	printf("%s: %s\n",argv[1], line);
	ft_strdel(&line);
	close(fd);
	return (0);
}
