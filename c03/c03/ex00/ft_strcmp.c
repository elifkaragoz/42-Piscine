/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:00:57 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/15 12:13:59 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while(s1[i] == s2[i] && (s1[i] && s2[i]) != '\0')
	{
			i++;
	}
	return(s1[i] - s2[i]);
}
