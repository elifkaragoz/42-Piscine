/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:56:21 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/10 13:51:24 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
 int ft_str_is_numeric(char *str);

#include <stdio.h>

int main()
{
	printf("%d",ft_str_is_numeric("0123456789"));
	printf("%d",ft_str_is_numeric("123456?657"));
	printf("%d",ft_str_is_numeric("-*,.<"));
}
