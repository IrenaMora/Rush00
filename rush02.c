/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverkart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:58:26 by lverkart          #+#    #+#             */
/*   Updated: 2021/02/07 12:58:32 by lverkart         ###   ########.fr       */
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
	write_line(x, 'A', 'B', 'A');
	while (i < y - 2)
	{
		write_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y != 1)
		write_line(x, 'C', 'B', 'C');
}
