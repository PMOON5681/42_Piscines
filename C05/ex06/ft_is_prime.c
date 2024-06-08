/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:10:22 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/03 19:54:16 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	r;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	r = ft_sqrt(nb);
	while (i <= r)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
 	int	i;

 	i = -100;
 	while (++i <= 100)
 	{
 		if (ft_is_prime(i))
 			printf("N : %d\n", i);
 	}
}*/
