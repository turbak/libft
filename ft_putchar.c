/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauranus <cauranus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:05:02 by cauranus          #+#    #+#             */
/*   Updated: 2019/09/12 19:39:11 by cauranus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	unsigned char ch;
	unsigned char ch1;

	ch = (unsigned char)c;
	if ((unsigned char)c < 128)
	{
		write(1, &c, 1);
		return ;
	}
	ch1 = (ch >> 6) + 0xC0;
	write(1, &ch1, 1);
	ch1 = ((unsigned char)(ch << 2) >> 2) + 0x80;
	write(1, &ch1, 1);
}
