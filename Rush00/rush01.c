/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghiyacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 07:15:53 by ghiyacia          #+#    #+#             */
/*   Updated: 2018/07/08 07:29:01 by ghiyacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_first(int i, int x)
{
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	rush_mid(int i, int x)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush_last(int i, int x)
{
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			i = 1;
			if (j == 1)
				rush_first(i, x);
			else if (j == y)
				rush_last(i, x);
			else
				rush_mid(i, x);
			j++;
			ft_putchar('\n');
		}
	}
}
