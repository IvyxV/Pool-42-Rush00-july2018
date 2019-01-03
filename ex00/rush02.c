/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-sapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:53:01 by fde-sapo          #+#    #+#             */
/*   Updated: 2018/07/07 16:37:05 by fde-sapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char c, int n)
{
	while (n > 0)
	{
		ft_putchar(c);
		n--;
	}
}

void	ft_print_line(int x, char first, char content, char last)
{
	ft_putchar(first);
	ft_print(content, x - 2);
	if (x > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int n;

	n = 0;
	if (x > 0 && y > 0)
	{
		ft_print_line(x, 'A', 'B', 'A');
		while (n < y - 2)
		{
			ft_print_line(x, 'B', ' ', 'B');
			n++;
		}
		if (y > 1)
			ft_print_line(x, 'C', 'B', 'C');
	}
}
