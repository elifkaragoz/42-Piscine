/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:37:12 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/24 16:35:57 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	x = max - min;
	dest = (int *)malloc(sizeof(int) * x);
	if (!dest)
		return (0);
	while (i < x)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
