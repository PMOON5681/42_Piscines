/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:02:59 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/23 13:35:40 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t1;

	t1 = *a;
	*a = (t1 / *b);
	*b = (t1 % *b);
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d%d", a, b);
}*/
