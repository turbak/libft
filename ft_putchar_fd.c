/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauranus <cauranus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:06:35 by cauranus          #+#    #+#             */
/*   Updated: 2019/09/12 19:34:20 by cauranus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char ch;
	unsigned char ch1;
	unsigned char ch2;

	if (fd >= 0)
	{
		ch = (unsigned char)c;
		if ((unsigned char)c < 128)
		{
			write(fd, &c, 1);
			return ;
		}
		ch1 = (ch >> 6) + 0xC0;
		ch2 = ((unsigned char)(ch << 2) >> 2) + 0x80;
		write(fd, &ch1, 1);
		write(fd, &ch2, 1);
	}
}
