/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:51:53 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/29 22:34:00 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srcl;
	unsigned int	dstl;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dest);
	if (size <= dstl)
		return (size + srcl);
	i = dstl;
	j = 0;
	while (i < size - 1 && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dstl + srcl);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	unsigned int	result;
	char    	wsrc[50] = "ay";
	char		td[50] = "Mund";
	char    	wd[50] = "Mund";
	char		*d;
	char		*src;

	d = wd;
	src = wsrc;
	result = strlcat(td, src, 3);
	printf("%d, %s\n", result, td);
	result = ft_strlcat(d, src, 3);
	printf("%d, %s\n", result, d);
	return (0);
}*/
