/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:45:24 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 20:23:03 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	c;
	int	*n;

	if (min >= max)
		return (0);
	c = min;
	n = (int *)malloc(sizeof(int) * (max - min));
	if (!n)
		return (0);
	i = -1;
	while (i < max - min)
		n[++i] = c++;
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	*n;

	n = ft_range(3,15);
	i = -1;
	while (++i < 15 - 3)
		printf("%d, ", n[i]);
	free(n);
}*/
