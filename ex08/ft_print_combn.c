/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:30:08 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/13 11:12:01 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	i;
	int	x;

	i = 0;
	x = n-1;
	while (i < n)
	{
		write(1, &x, 1);
		write(1, &x-1, 1);
		i++;
	}
}

void ft_print(int taille, int val)
{
	int i;
	
	i = 0;
	while (i < taille)
	{
		//write();
	}
}


int main(int argc, char const *argv[])
{
	ft_print_combn(2);
	return 0;
}
