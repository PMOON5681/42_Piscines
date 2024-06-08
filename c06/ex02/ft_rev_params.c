/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:43:53 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/03 22:34:42 by tjiranar         ###   ########.fr       */
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
	while (i < ac - 1)
	{
		l = ft_strlen(av[ac - 1 - i]);
		write(1, av[ac - 1 - i], l);
		write(1, "\n", 1);
		i++;
	}
}
