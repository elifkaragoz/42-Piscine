/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:16:00 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:58 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	printf("%d",ft_str_is_uppercase("HSDJSJDF"));
	printf("%d",ft_str_is_uppercase("JRHDJDS*JFDHJ"));
	printf("%d",ft_str_is_uppercase("{45875hddfk"));
}
