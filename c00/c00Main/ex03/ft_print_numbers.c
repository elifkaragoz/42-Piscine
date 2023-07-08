/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:40 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/01 19:27:18 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	numbs;

	numbs = '0';
	while (numbs <= '9')
	{
		write(1, &numbs, 1);
			numbs++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
