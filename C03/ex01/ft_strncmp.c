/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:10:04 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/31 15:27:47 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "\201bsa";
	char	s2[] = "\0as";
	int	result;

	result = strncmp(s1, s2, 4);
	printf("%d\n", result);
	result = ft_strncmp(s1, s2, 4);
	printf("%d\n", result);
//	printf("%c", '\201');

}
