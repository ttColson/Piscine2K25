/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:59:17 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/10 16:04:35 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(int argc, char const *argv[])
{
	int div,mod;
	div = 5;
	mod = 5;
	ft_div_mod(62, 10, &div, &mod);
	printf("div : %d, mod : %d", div, mod);
	return 0;
}
