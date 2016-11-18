/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:32:07 by thninh            #+#    #+#             */
/*   Updated: 2016/11/03 14:44:35 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_find.h"

void		my_str(int n, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(n, &str[i], 1);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (argc == 1)
	{
		my_str(2, "File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		my_str(2, "Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		my_str(1, buf);
	}
	close(fd);
	return (0);
}
