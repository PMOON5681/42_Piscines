/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:04:35 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 20:38:12 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_strlen(char *str, char *sep)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (str[i])
		i++;
	s = 0;
	while (sep[s])
		s++;
	return (i + s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenght;
	int		i;
	char	*str;

	lenght = 0;
	i = -1;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (++i < size)
		lenght = lenght + ft_strlen(strs[i], sep);
	str = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (0);
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	*sep;

	char *strs[] = { "Hello", "42", "Bangkok" };
	sep = " ";
	printf("%s",ft_strjoin(3, strs, sep));
}*/
