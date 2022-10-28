/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:12:46 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/22 13:43:25 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ad;
	t_list	*ap;

	ad = NULL;
	while (lst)
	{
		ap = ft_lstnew(f(lst -> content));
		if (!ap)
		{
			ft_lstclear(&ad, del);
			return (NULL);
		}
		ft_lstadd_back(&ad, ap);
		lst = lst -> next;
	}
	return (ad);
}
/**
**  void *f_map(void *content)
**  {
**      if (!*(char *)content)
**          return 0;
**      return("kanka");
**  }
**  void f_del(void *content)
**  {
**     free(content);
**     printf("free~\n");
**  }
**
**/
/** int main(void)
** {
**     char s[] = "cafer";
**     char t[] = "mahmut";
**     t_list *lst = ft_lstnew(s);
**     ft_lstadd_back(&lst, ft_lstnew(t));
**     
**     t_list *new_lst = ft_lstmap(lst, f_map, f_del);
**     while(new_lst)
**     {
**         printf("\nlst = %s new_lst = %s\n\n",        
(char *)lst ->content, (char *)new_lst ->content);
**         new_lst = new_lst -> next;
**         lst = lst ->next;
**       }
**	 }
**/
