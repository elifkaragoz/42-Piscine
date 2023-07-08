/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:27:57 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 18:32:25 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			c++;
		else if (str[c] >= 'a' && str[c] <= 'z')
			c++;
		else
			return (0);
	}
	return (1);
}
