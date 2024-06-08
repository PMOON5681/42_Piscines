/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:04:21 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/29 16:01:20 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	swap(int *first, int *second)
{
	int	temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 1 + i;
		while (j < size)
		{
			if (tab[i] > tab[j])
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {3, 4, 1, 6, 5};
	int	i;

	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}
