/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:49:31 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/26 20:31:05 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	int_to_char(int i, int j)
{
	int	tens;
	int	unit;

	tens = (i / 10) + 48;
	unit = (i % 10) + 48;
	write (1, &tens, 1);
	write (1, &unit, 1);
	write (1, " ", 1);
	tens = (j / 10) + 48;
	unit = (j % 10) + 48;
	write (1, &tens, 1);
	write (1, &unit, 1);
	if (i != 98 || j != 99)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		j = (1 + (i - 0));
		while (j < 100)
		{
			int_to_char(i, j);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
