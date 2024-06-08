/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:20:40 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/05 21:59:36 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	k;
	char	*strs[20];
	char	w[30];

	count = 0;
	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[i] != charset[j])
		{

		}
	}
	strs = (char *)malloc 
}

#include <stdio.h>

int	main(void)
{
	char	**str;

	str = ft_split("The CNSA Chang'e 6 completes sampling and takeoff from the far side of the Moon."," ,");
	printf("%p\n", *str);
}
