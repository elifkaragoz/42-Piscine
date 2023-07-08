/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:08:31 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 11:53:36 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strupcase(char *str);

int main()
{
    char str[] = "Hello World";
    ft_strupcase(str);
    printf("%s",str);
}