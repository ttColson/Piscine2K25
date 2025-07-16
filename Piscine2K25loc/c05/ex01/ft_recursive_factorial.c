/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:01:00 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 12:56:52 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factor(int nb, int n, int val)
{
	if (n == 0)
		return (nb);
	else
		return (ft_recursive_factor(nb * (val - n), n - 1, val));
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (-1 * ft_recursive_factor(-1 * nb, (-1 * nb) - 1, -1 * nb));
	else
		return (ft_recursive_factor(nb, nb - 1, nb));
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_recursive_factorial(-10));
// 	return 0;
// }