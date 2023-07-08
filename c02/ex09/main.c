/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:11:08 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 14:36:39 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcapitalize(char *str);

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf("%s",ft_strcapitalize(str));
     
}
