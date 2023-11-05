/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:05:58 by wonhshin          #+#    #+#             */
/*   Updated: 2022/12/16 17:03:15 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp_s1;
	unsigned char	*cmp_s2;

	cmp_s1 = (unsigned char *)s1;
	cmp_s2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*cmp_s1 != *cmp_s2)
			return (*(cmp_s1) - *(cmp_s2));
		cmp_s1++;
		cmp_s2++;
	}
	return (0);
}
