/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:14:16 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/30 12:03:11 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkcase(int c, char w)
{
	if ((c == 1) && (w >= 'A' && w <= 'Z'))
		c = 0;
	else if ((c == 0) && (w < '0' || w > 'z'))
		c = 1;
	else if ((c == 0) && ((w > '9' && w < 'A') || (w > 'Z' && w < 'a')))
		c = 1;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		c;
	char	w;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		w = str[i];
		if ((c == 1) && ((w >= 'a' && w <= 'z') || (w >= '0' && w <= '9')))
		{
			if (w >= 'a' && w <= 'z')
				str[i] = w - 32;
			c = 0;
		}
		else if ((c == 0) && (w >= 'A' && w <= 'Z'))
			str[i] = w + 32;
		else
			c = ft_checkcase(c, w);
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	w[62] = " salut, comment tu vas ? 
		42mots QUarante-deux; cinquante+et+un";
	char	*str;

	str = w;
	str = ft_strcapitalize(str);
	printf("%s", str);
}*/
