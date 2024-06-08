/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:22:52 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 15:16:26 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_to_base(int nbr, char *base_to, int base_lenght)
{
	int	i;
	char	*n;
	char	*result;

	if (nbr / base_lenght > 0)
	{
		n = ft_to_base(nbr / base_lenght, base_to, base_lenght);
		c = ft_strcat(c, n)
	}
	return (nbr % 10 + '0'i);
}
