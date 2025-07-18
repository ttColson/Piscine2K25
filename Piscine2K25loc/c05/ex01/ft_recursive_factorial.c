/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:01:00 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 09:21:48 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (nb * (ft_recursive_factorial((-1 * nb) - 1)));
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_recursive_factorial(-10));
// 	return 0;
// }