/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:25:07 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 18:07:48 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[10] = "Hello";
	char dest[10] = "";
	unsigned int n;
	n = 4;
	ft_strlcpy(dest, src, n);
	printf("src : %s\ndest : %s\nsize : %d",src,dest,n);
}
