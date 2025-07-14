/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:43:15 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 15:27:28 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_trad(int n)
{
	return ('0' + n);
}

void	ft_print(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	n = ft_trad(n);
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	int	x;
	int	div;

	div = 1000000000;
	x = 45;
	if (nb < 0)
		write(1, &x, 1);
	x = (nb / div) % 10;
	while (x == 0 && nb != 0)
	{
		div = div / 10;
		x = (nb / div) % 10;
	}
	while (div >= 1 && nb != 0)
	{
		ft_print(x);
		div = div / 10;
		if (div != 0)
			x = (nb / div) % 10;
	}
	if (nb == 0)
		ft_print(nb);
}

/*
int main()
{
	int n = -2147483647;
	ft_putnbr(n);
	return 0;
}
*/