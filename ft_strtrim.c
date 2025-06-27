/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:36:16 by bkara             #+#    #+#             */
/*   Updated: 2025/06/24 21:56:34 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_inset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_inset (s1[start], set))
		start++;
	while (end > start && ft_inset(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
