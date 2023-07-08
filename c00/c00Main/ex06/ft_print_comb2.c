/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:23:29 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/01 20:40:47 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

 void ft_print_comb2(void)
{
	char	num1;
	char	num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100) 
		{
			ft_putchar(num1 / 10 + 48);
			ft_putchar(num1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(num2 / 10 + 48);
			ft_putchar(num2 % 10 + 48);
			num2++;
				if (num1 != 98)
					write(1, ", ", 2);
		}
		num1++;
	}
}

int main()

{
	ft_print_comb2();
}
