/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:57:33 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 13:56:58 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int ab, int power)
{
	int n;

	n = ab;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power >= 2)
	{
		n *= ab;
		power --;
	}
	return (n);
}

int main(int argc, char const *argv[])
{
	printf("%d", ft_iterative_power(-3, 0));
	return 0;
}
