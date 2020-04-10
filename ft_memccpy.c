/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afukuhar <afukuhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 14:20:58 by afukuhar          #+#    #+#             */
/*   Updated: 2020/04/10 17:13:11 by afukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*src_c;
	int		len_c;

	if (!dst && !src)
		return (NULL);
	src_c = ft_memchr(src, c, n);
	if (src_c != NULL)
	{
		len_c = src_c - src + 1;
		ft_memmove(dst, src, len_c);
		return (dst + len_c);
	}
	ft_memmove(dst, src, n);
	return (NULL);
}
