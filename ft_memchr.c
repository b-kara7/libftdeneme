/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:58:25 by bkara             #+#    #+#             */
/*   Updated: 2025/07/02 21:48:49 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
