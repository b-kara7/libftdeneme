/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:19:02 by bkara             #+#    #+#             */
/*   Updated: 2025/07/02 11:44:28 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)s2;
	dst = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (dst[i] != src[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}
