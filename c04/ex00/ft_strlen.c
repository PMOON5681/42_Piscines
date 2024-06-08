/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:12 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/31 19:07:01 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	w[] = "GGGG";
	char	*str;

	str = w;
	printf("%zd\n", strlen(str));
	printf("%d\n", ft_strlen(str));
}
