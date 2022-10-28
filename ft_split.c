/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:02:18 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/10 13:13:14 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**free_error(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static size_t	get_dpointer_len(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	len = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (len != 0)
				count++;
			len = 0;
		}
		else
			len++;
		i++;
	}
	if (len)
		return (count + 1);
	return (count);
}

static void	create_arr(char const *s, char c, size_t ct, char **ptr)
{
	size_t	len;
	size_t	i;
	size_t	j;

	len = 0;
	i = 0;
	j = 0;
	while (j < ct)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (len != 0)
			{
				ptr[j] = (char *)malloc(sizeof(char) * (len + 1));
				if (!ptr[j])
					free_error(ptr);
				ft_strlcpy(ptr[j++], s + i - len, len + 1);
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**dpointer;
	size_t	len;

	if (!s)
		return (NULL);
	len = get_dpointer_len(s, c);
	dpointer = (char **)malloc(sizeof(char *) * (len + 1));
	if (!dpointer)
		return (NULL);
	create_arr(s, c, len, dpointer);
	dpointer[len] = NULL;
	return (dpointer);
}
/*
int main()
{
    char *xd;
    char **q;
    xd = "Ecole-Kocaeli";
    
    q = ft_split(xd, '-')
    printf("%s", q[0]);
}
*/
