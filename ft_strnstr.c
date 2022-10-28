/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:48:29 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/09 13:00:49 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *b, const char *k, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!b && len == 0)
		return (0);
	result = (char *)b;
	j = 0;
	if (ft_strlen(k) == 0)
		return (result);
	while (result[j] != '\0' && len >= ft_strlen(k))
	{
		i = 0;
		while (result[j + i] == k[i]
			&& result[j + i] != '\0' && k[i] != '\0')
		i++;
		if (k[i] == '\0')
			return (&result[j]);
		j++;
		len--;
	}
	return (0);
}
