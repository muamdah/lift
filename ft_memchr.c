/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:06:51 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/01 10:50:26 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	size_t	i;
	if (src == NULL)
		return (NULL);
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			src = (const void *)s;
			return ((void *)src + i);
		}
		i++;
	}
	return (NULL);
}