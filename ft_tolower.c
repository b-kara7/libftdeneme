/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:00:45 by bkara             #+#    #+#             */
/*   Updated: 2025/05/31 14:13:12 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int b)
{
	if (b >= 'A' && b <= 'Z')
		b += 32;
	return (b);
}
