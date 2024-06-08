/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:27:57 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/31 21:20:41 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tohexa(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c / 16 > 0)
	{
		putchar(hex[c / 16]);
		putchar(hex[c % 16]);
	}
	else
	{
		putchar('0');
		putchar(hex[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			putchar('\\');
			ft_tohexa(str[i]);
		}
		else
			putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
