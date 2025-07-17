/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:22:35 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 09:50:01 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (nb > 0)
	{
		nb -= n;
		n += 2;
		i ++;
	}
	if (nb == 0)
		return (i);
	else
		return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_sqrt(8191));
// 	return 0;
// }