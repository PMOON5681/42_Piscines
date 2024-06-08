/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:03:15 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/24 00:59:03 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 11;
	b = 2;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d%d", *div, *mod);
}
