/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:49:13 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 10:18:10 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int main(int argc, char const *argv[])
{
	int a = 5;
	int b = 12;
	printf("a : %d, b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
*/