/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:01:17 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 15:27:36 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_trad(int n)
{
	return ('0' + n);
}

void	ft_print(int n)
{
	n = ft_trad(n);
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = x + 1;
	while (x <= 98)
	{
		y = x +1;
		while (y <= 99)
		{
			ft_print(x / 10);
			ft_print(x % 10);
			write(1, " ", 1);
			ft_print(y / 10);
			ft_print(y % 10);
			if (x != '7')
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

/*
int main() {
	ft_print_comb2();
	return 0;
}
*/