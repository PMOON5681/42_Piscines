/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:18:56 by tjiranar          #+#    #+#             */
/*   Updated: 2024/06/06 19:49:54 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	i;

	printf("%d\n", ac);
	if (ac != 1)
		return (0);
	i = 0;
	while (av[0][i])
		i++;
	write (1, av[0], i);
	write (1, "\n", 1);
}
