/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:33:09 by wonhshin          #+#    #+#             */
/*   Updated: 2022/12/16 16:22:09 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_cpy;
	char	*src_cpy;
	size_t	i;

	i = -1;
	if (len == 0 || dst == src)
		return (dst);
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	if (dst < src)
	{
		while (++i < len)
			dst_cpy[i] = src_cpy[i];
	}
	else
	{
		while (++i < len)
			dst_cpy[len - i - 1] = src_cpy[len - i - 1];
	}
	return (dst);
}
