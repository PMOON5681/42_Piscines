/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:14:21 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 20:23:30 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	i;
	int	*n;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = (int *)malloc(sizeof(int) * max - min);
	if (!n)
	{
		*range = 0;
		return (0);
	}
	*range = n;
	i = -1;
	while (++i < max - min)
		n[i] = min + i;
	return (max - min);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int n;
	int	*p;

	i = -1;
	n = ft_ultimate_range(&p, 3, 5);
	while (++i < 2)
		printf("%d ",p[i]);
	free(p);
	return (0);
}*/
