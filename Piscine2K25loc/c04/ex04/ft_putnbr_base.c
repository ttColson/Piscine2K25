/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:31:41 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 09:46:12 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	x = '-';
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

void	ft_putnbr_base(int nbr, char *base)
{
	if (base == "01")
		printf("binary\n");
	else if (base == "0123456789ABCDEF")
		printf("hexa\n");
	else if (base == "poneyvif")
		printf("octal\n");
	else if (base == "0123456789")
		ft_putnbr(nbr);
}

int main(int argc, char const *argv[])
{
	ft_putnbr_base(5, "01");
	ft_putnbr_base(5, "0123456789ABCDEF");
	ft_putnbr_base(5, "poneyvif");
	ft_putnbr_base(5, "0123456789");
	return 0;
}