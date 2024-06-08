/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:56:11 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/27 14:12:44 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
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

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[12] = "Hello ";
	char	src[6] = "World";
	char	d[12] = "Hello ";
	char	s[6] = "World";

	printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strcat(d, s));
}*/
