/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:47:56 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 11:01:44 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;
	int minus;

	n = 1;
	i = 0;
	minus = 0;
	if (nb < 0)
	{
		minus = 1;
		nb *= -1;
	}
	while (i < nb)
	{
		n *= nb - i;
		i ++;
	}
	if (minus)
		return(n * -1);
	return (n);
}

int main(int argc, char const *argv[])
{
	printf("%d", ft_iterative_factorial(-9));
	return 0;
}