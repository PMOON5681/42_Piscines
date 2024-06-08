/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:37:43 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/04 17:11:09 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_params(int ac, char **av)
{
	int	i;
	int	l;

	i = 0;
	while (++i < ac)
	{
		l = ft_strlen(av[0 + i]);
		write(1, av[0 + i], l);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	if (ac >= 2)
	{
		while (++i < ac - 1)
		{
			j = i;
			while (++j < ac)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
				{
					tmp = av[i];
					av[i] = av[j];
					av[j] = tmp;
				}
			}
		}
	}
	ft_print_params(ac, av);
	return (0);
}
