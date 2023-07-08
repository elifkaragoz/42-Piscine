/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:25:49 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/10 10:27:06 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int    ft_str_is_alpha(char *str);

int main()
{
    printf("%d\n", ft_str_is_alpha("abcdefghijkl"));
    printf("%d\n", ft_str_is_alpha("abcd1efghijk"));
    printf("%d", ft_str_is_alpha("-_<,.-"));
}

