/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:05:33 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 10:22:29 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}

/*
int main(int argc, char const *argv[])
{
	int a = 62;
	int b = 10;
	ft_div_mod(&a, &b);
	printf("div : %d, mod : %d", a, b);
	return 0;
}
*/