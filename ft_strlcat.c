/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:32:15 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/08 13:16:29 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen((char *)src);
	dlen = ft_strlen((char *)dest);
	a = 0;
	b = dlen;
	if (size == 0)
		return (slen + size);
	if (size <= dlen)
		return (size + slen);
	while (src[a] != '\0' && a < size - dlen - 1)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
    char src[100] = "World";
    char dest[100] = "Hello,";
    ft_strlcat(dest, src, 100);
    printf("%s",dest);
}
*/
