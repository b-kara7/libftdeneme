/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:26:37 by bkara             #+#    #+#             */
/*   Updated: 2025/06/24 15:05:18 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start > s_len)
		len = 0;
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy[i] = s [start + i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
