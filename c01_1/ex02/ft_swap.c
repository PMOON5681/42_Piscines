/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:01:00 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/23 13:31:21 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 2;
	d = 4;
	a = &c;
	b = &d;
	ft_swap(a ,b);
	printf("%d%d", *a, *b);    
}*/
