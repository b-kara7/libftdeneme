/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:53:33 by bkara             #+#    #+#             */
/*   Updated: 2025/06/27 17:45:36 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*int main()
{
	int fd;
	fd = open("b.txt", O_WRONLY | O_CREAT , 0777);
	printf("%d\n",fd);
	ft_putstr_fd("shasfasf",fd);
}*/
