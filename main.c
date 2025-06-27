/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:06:27 by bkara             #+#    #+#             */
/*   Updated: 2025/06/27 17:45:01 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include "libft.h"

int main()
{
	char ptr[] = "beyza betül";
	char **result = ft_split(ptr, ' ');
	for(int i = 0; result[i]; i++)
		printf("%s", result[i]);
	return (0);
}

