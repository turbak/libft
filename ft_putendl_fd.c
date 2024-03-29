/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauranus <cauranus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:14:32 by cauranus          #+#    #+#             */
/*   Updated: 2019/09/12 18:46:00 by cauranus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	buf;
	char	c;

	if (s != NULL && fd >= 0)
	{
		c = '\n';
		buf = ft_strlen(s);
		write(fd, s, buf);
		write(fd, &c, 1);
	}
}
