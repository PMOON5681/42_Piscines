/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:27:08 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/29 22:33:32 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i + j] == to_find[j])
		{
			while ((to_find[j] != '\0') && (str[i + j] == to_find[j]))
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "There the moon to the sky";
	to_find = "moon";
	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
