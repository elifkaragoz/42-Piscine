/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:07:09 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/16 18:54:11 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);
int main()
{
	char str[] = "elif nur karagoz";
	char to_find[] = "nur";
	printf("%s", ft_strstr(str, to_find));
}
