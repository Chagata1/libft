/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:50:40 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/10 12:00:20 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new_string == NULL)
			return (NULL);
		while (i < ft_strlen(s))
		{
			new_string[i] = f((unsigned int)i, s[i]);
			i++;
		}
		new_string[i] = 0;
		return (new_string);
	}
	return (NULL);
}
