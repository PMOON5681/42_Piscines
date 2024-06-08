/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:46:40 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/02 20:03:13 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (n == 0)
		return (1);
	else if (n < 0)
		return (0);
	while (--n)
		nb = nb * n;
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-2));
}*/
