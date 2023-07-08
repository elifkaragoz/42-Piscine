/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:48:16 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/16 16:05:54 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char src[] = "selam";
	char dest[] = "jhfgh";
	printf("%s\n%s",ft_strncat(dest, src, 2),dest);
}
