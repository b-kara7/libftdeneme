/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:19:38 by bkara             #+#    #+#             */
/*   Updated: 2025/05/31 14:00:06 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int b)
{
	if (b >= 'a' && b <= 'z')
		b -= 32;
	return (b);
}
