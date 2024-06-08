/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:16:18 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 12:57:55 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	result;
	char	s1[] = "\201bsq";
	char	s2[] = "Abs";

	result = strcmp(s1, s2);
	printf("%d\n", result);
	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
}
