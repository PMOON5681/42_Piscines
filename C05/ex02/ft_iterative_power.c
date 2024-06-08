/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:25:08 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/03 21:11:16 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		nb = nb * n;
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(4, 4));
}*/
