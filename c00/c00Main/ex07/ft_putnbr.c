/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:46:37 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/02 13:38:24 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) 
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{	
	if (nb == -2147483648)
		{
			ft_putnbr(nb / 10);
			ft_putchar('8');
		}
	else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
	else 
	{
		if (nb > 9 )
		ft_putnbr(nb / 10);
			ft_putchar('0' + nb % 10);
	}
}

int main()
{
	ft_putnbr((-)-745634);
}
