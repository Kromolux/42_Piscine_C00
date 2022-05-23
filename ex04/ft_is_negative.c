/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:17:14 by rkaufman          #+#    #+#             */
/*   Updated: 2021/09/30 18:17:16 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	cp;
	char	cn;

	cp = 'P';
	cn = 'N';
	if (n >= 0)
	{
		write(1, &cp, 1);
	}
	else
	{
		write(1, &cn, 1);
	}
}
