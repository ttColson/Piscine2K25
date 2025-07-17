/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:38:10 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 12:10:55 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	res;

	i = 2;
	res = 1;
	if (nb <= 1)
		return (0);
	while (i * i < nb)
	{
		if (nb % i == 0)
			res = 0;
		i ++;
	}
	return (res);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_is_prime(2));
// 	return 0;
// }