/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <thninh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:15:24 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 10:16:09 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void		bubble_sort(int argc, char **argv)
{
	int		i;
	char	*tmp;
	int		boolean;

	boolean = 1;
	while (boolean)
	{
		i = 1;
		boolean = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
				boolean = 1;
			}
			i++;
		}
	}
}

int			main(int argc, char **argv)
{
	int		x;

	x = 1;
	if (argc > 1)
	{
		bubble_sort(argc, argv);
		while (x < argc)
		{
			ft_putstr(argv[x]);
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
