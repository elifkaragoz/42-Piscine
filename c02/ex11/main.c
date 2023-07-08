/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pc <42istanbul.com.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:42:49 by pc                #+#    #+#             */
/*   Updated: 2023/02/11 23:17:53 by pc               ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putstr_non_printable(char *str);
int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	ft_putchar('\n');
	ft_putstr_non_printable("");
} 
