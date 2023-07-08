/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:26:02 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/10 10:53:57 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	int n;
	char src[15] = "kaynak dizin";
	char dest[15] = "hedef dizi";
	n = 3;
	printf("src : %s\ndest : %s",ft_strncpy(dest,src,8),ft_strncpy(dest,src,4));

}
