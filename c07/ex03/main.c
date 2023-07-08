/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:42:30 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/25 14:50:58 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
 char *ft_strjoin(int size, char **strs, char *sep);
int	main(void)
{
	char *strs[3];

	strs[0] = "Hello";
	strs[1] = "Selam";
	strs[2] = "naber";
	
	printf("%s", ft_strjoin(3, strs, "**"));
}
