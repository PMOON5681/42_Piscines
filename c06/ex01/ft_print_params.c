/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:25:33 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/03 21:40:27 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	i = 0;
	if (ac < 2)
		return (0);
	while (++i < ac)
	{
		l = ft_strlen(av[0 + i]);
		write(1, av[0 + i], l);
		write(1, "\n", 1);
	}
}
