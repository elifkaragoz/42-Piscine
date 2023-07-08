/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:14:16 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 11:06:54 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_printable(char *str);

int main()
{
    printf("%d",ft_str_is_printable("3478efhdsgfr"));
    printf("%d",ft_str_is_printable(".,%&/^%/"));
    printf("%d",ft_str_is_printable("    "));
}