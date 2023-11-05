/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:00:08 by wonhshin          #+#    #+#             */
/*   Updated: 2022/12/16 16:08:53 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dest_cpy;
	const char		*src_cpy;

	dest_cpy = (char *)dst;
	src_cpy = (const char *)src;
	if (dst == src || n == 0)
		return (dst);
	while (n-- > 0)
		*dest_cpy++ = *src_cpy++;
	return (dst);
}
