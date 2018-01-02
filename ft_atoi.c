/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 09:08:08 by muamdah           #+#    #+#             */
/*   Updated: 2017/12/29 09:48:41 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	char	*s;
	int		neg;
	int		nb;

	neg = 0;
	nb = 0;
	s = (char *)str;
	while (*s == '\t' || *s == '\n' || *s == '\r' || *s == '\v' || *s == '\f'
			|| *s == ' ')
		s++;
	if (*s == '-')
		neg = 1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		nb = (nb * 10) + *s - '0';
		s++;
	}
	if (neg != 0)
		nb = -nb;
	return (nb);
}