/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:59:32 by bkara             #+#    #+#             */
/*   Updated: 2025/07/02 21:50:59 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	cpy = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		cpy[i + j] = s2[j];
		j++;
	}
	cpy[i + j] = '\0';
	return (cpy);
}
