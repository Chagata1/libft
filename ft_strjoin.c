/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:29:31 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/15 13:29:48 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}
/*
 int    main(void)
 {
     int        index;
     char    **strs;
     char    *separator;
     char    *result;
     int    size;

     size = 3;
     strs = (char **)malloc(3 * sizeof(char *));
     strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
     strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
     strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
     strs[0] = "Hello";
     strs[1] = "friend,";
     strs[2] = "you are awesome";
     separator = " ";
     result = ft_strjoin(size, strs, separator);
     printf("%s$\n", result);
     free(result);
 }
 */
