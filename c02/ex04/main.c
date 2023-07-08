/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:40:28 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/10 16:03:30 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_lowercase(char *str);

int	main()
{
	printf("%d",ft_str_is_lowercase("abcdhsdhj"));
	printf("%d",ft_str_is_lowercase("abhd67bfddn"));
	printf("%d",ft_str_is_lowercase("<3768-.,"));
}
