/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <ekaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:11:12 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/11 22:05:37 by pc               ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (c == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			c++;
		}
		else if (c > 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'z' || str[i] < 'a' && str[i] > 'Z'))
				c = 0;
		else
			c++;
		i++;
	}
	return (str);
}
