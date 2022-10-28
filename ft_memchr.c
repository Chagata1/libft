/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:15:04 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/09 13:16:26 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*result;

	i = 0;
	ch = (unsigned char)c;
	result = (unsigned char *)s;
	while (i < n)
	{
		if (result[i] == ch)
			return (&result[i]);
		i++;
	}
	result = NULL;
	return (result);
}
