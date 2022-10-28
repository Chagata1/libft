/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:02:52 by ryayla            #+#    #+#             */
/*   Updated: 2022/10/09 11:04:12 by ryayla           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*s
int main()
{
    char *baha = "RANDOMTEXT";
    int i = 0;
    
    while (baha[i] != '\0')
    {
        printf("%c", ft_tolower(baha[i]));
        i++;
    }
    
    return (0);
}
*/
