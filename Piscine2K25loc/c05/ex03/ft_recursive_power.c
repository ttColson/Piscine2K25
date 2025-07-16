/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:53:21 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 14:44:16 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_pow(int nb, int power, int v)
{
	if (power == 1)
		return(nb);
	return (ft_recursive_pow(nb * nb, power - 1, v));
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_pow(nb, power - 1, nb));
}

int main(int argc, char const *argv[])
{
	
	return 0;
}
