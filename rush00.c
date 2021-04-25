/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacarlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:42:46 by tacarlen          #+#    #+#             */
/*   Updated: 2021/02/07 20:01:15 by tacarlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_line(int x, char c, char d, char e)
{
	int i;

	i = 0;
	ft_putchar(c);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	while (i < x - 2)
	{
		ft_putchar(d);
		i++;
	}
	ft_putchar(e);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar(' ');
		return ;
	}
	write_line(x, 'o', '-', 'o');
	while (i < y - 2)
	{
		write_line(x, '|', ' ', '|');
		i++;
	}
	if (y != 1)
		write_line(x, 'o', '-', 'o');
}
