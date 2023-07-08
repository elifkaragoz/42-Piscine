/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:55:41 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 12:10:11 by ekaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strlowcase(char *str);

int main()
{
    char str[] = "Hello WorLD";
    ft_strlowcase(str);
    printf("%s",str);
}