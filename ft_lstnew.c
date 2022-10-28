/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:28:11 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/22 13:44:38 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	ptr -> next = NULL;
	ptr -> content = content;
	return (ptr);
}
/*
**int		main(void)
**{
**	char	str[] = "ben bir garip keloglanim";
**
**	t_list	*elem;
**
**	elem = ft_lstnew((void *)str);
**	printf("\n%s\n", elem->content);
**}
*/
