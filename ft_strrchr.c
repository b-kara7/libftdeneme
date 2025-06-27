/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:28:15 by bkara             #+#    #+#             */
/*   Updated: 2025/06/24 19:07:15 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*b;

	i = 0;
	b = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			b = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (b);
}
