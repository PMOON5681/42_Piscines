/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:51:35 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/04 15:57:26 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
/*	char	w[6] = "hello";
	char	w2[6] = "";
	char	*dest;
	char	*src;
	int	lenght;

	src = w;
	dest = w2;
	lenght = ft_strlcpy(dest, src, 0);
	printf("%d, %s", lenght, dest);
	*/
	    //unsigned int ssize = 8;
    char s[] = "sourcecode";
    char d[] = "";
	char r[] = "";
    int a;

    a = ft_strlcpy(d,s,8);
	int b = strlcpy(r, s, 8);
    printf("%d : %s\n%d : %s",a, d, b ,r);
    //printf("%s",d);
}
