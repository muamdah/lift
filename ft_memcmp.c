/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:06:51 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/01 10:46:57 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_bis;
	char	*s2_bis;
	size_t	i;
	size_t	a;

	s1_bis = (char *)s1;
	s2_bis = (char *)s2;
	i = 0;
	a = 0;
	while ((s1_bis[i] != '\0' || s2_bis[a] != '\0') && (i < n || a < n))
	{
		if ((s1_bis[i] < s2_bis[a]) || (s1_bis[i] > s2_bis[a]))
			return (s1_bis[i] - s2_bis[a]);
		i++;
		a++;
	}
	return (0);
}
