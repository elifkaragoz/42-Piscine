/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:24:44 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/05 14:08:14 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

 int main ()
 {
     int a = 16;
     int b = 5;
     int *div = &a;
     int *mod = &b;

     ft_div_mod(a, b, div, mod);
         printf("%d \n%d",*div, *mod);

 }
 
