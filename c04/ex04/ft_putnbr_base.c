/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:27:52 by tjiranar          #+#    #+#             */
/*   Updated: 2024/05/31 16:52:36 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int		l;
	char	w;

	l = 0;
	while (base[l] != '\0')
	{
		w = base[l];
		if (w < '0' || w > 'z')
			return (0);
		else if ((w > '9' && w < 'A') || (w > 'Z' && w < 'a'))
			return (0);
		l++;
	}
	if (l < 2)
		return (0);
	else
		return (1);
}

int	check_same(int c, char *base)
{
	int	i;
	int	j;

	if (c == 1)
	{
		i = 0;
		while (base[i + 1])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
		}
		return (1);
	}
	else
		return (0);
}

void	to_base(int c, char *base, int l)
{
	if (c < 0)
	{
		ft_putchar('-');
		c = c * -1;
	}
	if (c / l > 0)
	{
		to_base(c / l, base, l);
		ft_putchar(base[c % l]);
	}
	else
		ft_putchar(base[c]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	flag;
	int	lbase;

	lbase = 0;
	while (base[lbase])
		lbase++;
	flag = check_same(check_base(base), base);
	if (flag)
		to_base(nbr, base, lbase);
}

/*#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-34324, "01");
	return (0);
}*/
