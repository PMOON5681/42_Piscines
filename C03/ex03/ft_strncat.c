/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:13:42 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/08 15:19:57 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    dest[10] = "ada";
        char    src[3] = "fd";
        char    d[10] = "ada";
        char    s[3] = "fd";

        printf("%s\n", strncat(dest, src, -1));
        printf("%s\n", ft_strncat(d, s, -1));
}
