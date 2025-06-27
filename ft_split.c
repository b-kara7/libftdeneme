/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:02:16 by bkara             #+#    #+#             */
/*   Updated: 2025/06/27 17:47:44 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	countword;

	if (!s)
		return (0);

	i = 0;
	countword = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			countword++;
		i++;
	}
	return (countword);
}
static int	ft_word_len(char const *s, char c, int start_index)
{
	size_t	len;
	size_t i;

	len = 0;
	i = start_index;

	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return(len);
}
static void	ft_free_all(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
char **ft_split(char const *s, char c)
{
	char 	**arr;
	int	word_count;
	int	i;
	int	word_index;
	char *tmp_word;
	
	word_index = 0;
	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	arr = ((char **)malloc(sizeof(char *) * word_count +1 ));
	if (!arr)
		return (NULL);
	while (word_count)
	{	
		i = i + ft_word_len(s, c, word_index);
		ft_substr(s, word_index, ft_word_len(s, c, word_index));
		if (!tmp_word)
		{
			ft_free_all(arr, word_count);
		}
		s += i;
		word_count--; 
	}
}

