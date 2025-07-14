/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:20:01 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/13 17:13:55 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int col;
	int lin;

	col = 1;
	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x) {
			if ((col == 1 && lin == 1) || (col == 1 && lin == y) || (col == x && lin == 1) || (col == x && lin == y))
				ft_putchar('o');
			else if (lin == 1 || lin == y)
				ft_putchar('-');
			else if (lin > 1 && (col == 1 || col == x))
				ft_putchar('|');
			else 
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
