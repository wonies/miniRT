/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:22:26 by wonhshin          #+#    #+#             */
/*   Updated: 2022/12/16 16:38:17 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (len > 0 && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		len--;
		i++;
	}
	return (NULL);
}
