/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:06:39 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/01 17:06:31 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char  harf;
	harf = 'a';
	while (harf <= 'z')
	{
		write(1, &harf, 1);
		harf++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
