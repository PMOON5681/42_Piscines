/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:21:13 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 15:16:23 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_pow(int n, int pow)
{
	if (pow == 0)
		return (1);
	if (pow < 0)
		return (0);
	return (n * base_pow(n, pow - 1));
}

int	ft_to_base_ten(char *nbr, int nbr_lenght, char *base_from, int base_lenght)
{
	int	i;
	int	j;
	int	n;
	int	base;

	base_lenght = ft_strlen(base_from);
	nbr_lenght = ft_strlen(nbr);
	i = 0;
	n = 0;
	while (nbr[i])
	{
		base = base_pow(base_lenght, nbr_lenght - i - 1);
		j = 0;
		while (base_from[j])
		{
			if (nbr[i] == base_from[j])
			{
				n = n + (j * base);
				break ;
			}
			j++;
		}
		i++;
	}
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
 	int	n;

	n = ft_to_base_ten(nbr, ft_strlen(nbr), base_from, ft_strlen(base_from));	
	return NULL;
}

int	main(void)
{
	printf("%s\n", ft_convert_base("1010", "01", "0123456789"));
}
