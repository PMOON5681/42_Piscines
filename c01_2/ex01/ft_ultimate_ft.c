/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:00:11 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/23 19:47:50 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include  <stdio.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

int	main(void)
{
	int	a;
	int	*n;

	n = &a;
	int **n2 = &n;
	int ***n3 = &n2;
	ft_ultimate_ft(n3);
	printf("%d", ***n3);
}
