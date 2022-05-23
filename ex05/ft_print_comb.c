/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:17:32 by rkaufman          #+#    #+#             */
/*   Updated: 2021/09/30 18:17:34 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	increment(char *combo);
void	print_numbers(char *combo);
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	combo[3];

	combo[0] = '0';
	combo[1] = '1';
	combo[2] = '2';
	while (combo[0] <= '7')
	{
		print_numbers(combo);
		increment(combo);
	}
}

void	increment(char *combo)
{
	combo[2]++;
	if (combo[2] > '9')
	{
		combo[1]++;
		combo[2] = combo[1] + 1;
		if (combo[1] > '8')
		{
			combo[0]++;
			combo[1] = combo[0] + 1;
			combo[2] = combo[1] + 1;
		}
	}
}

void	print_numbers(char *combo)
{
	ft_putchar(combo[0]);
	ft_putchar(combo[1]);
	ft_putchar(combo[2]);
	if (combo[0] < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
