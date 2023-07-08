/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:51:12 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/16 11:46:20 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char src[] = "baban nereli";
	char dest[] = "yavrum ";
	printf("%s", ft_strcat(dest, src));
}
