/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pc <42istanbul.com.tr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:08:42 by pc                #+#    #+#             */
/*   Updated: 2023/02/09 17:53:51 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src);

#include <stdio.h>

int main(void)
{
	char source[] = "Source String";
	char destin[] = "Destination String";
	char *dest;
	printf("src : %s\ndes : %s\n",source, destin);
	dest = ft_strcpy(destin, source);
	printf("src : %s\ndes : %s\n",source, destin);
	return (0);
}
