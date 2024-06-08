/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:22:52 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/05 15:29:33 by tjiranar         ###   ########.fr       */
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

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (!ptr)
		return (0);
	ft_strcpy(ptr, src);
	return (ptr);
}

/*#include <assert.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s = "Hello";
	char	*w;

	w = ft_strdup(s);
	assert(strcmp(s, w) == 0);
	printf("%s\n%s", s, w);
	free(w);
}*/
