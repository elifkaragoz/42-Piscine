/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaragoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:12:38 by ekaragoz          #+#    #+#             */
/*   Updated: 2023/02/05 18:49:42 by ekaragoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y && x > 0 && y > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p != 1 && p != x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((p == 1 || p == x) && (r != 1 && r != y))
				ft_putchar('|');
			else if ((p == 1 || p == x) || (r == 1 || r == y))
				ft_putchar('o');
			else
				(ft_putchar(' '));
			p++;
		}
		ft_putchar('\n');
			r++;
	}
	if (x <= 0 || y <= 0)
		ft_putchar('N');
}
