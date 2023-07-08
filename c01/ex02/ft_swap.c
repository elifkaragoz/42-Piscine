/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:08:54 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/07 11:28:47 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
 int main()
{
    int x;
    int y;
    int *a = &x;
    int *b = &y;
    
    x=5;
    y=4;


    ft_swap(a,b);
    printf("%d %d",*a,*b);
}
 */
