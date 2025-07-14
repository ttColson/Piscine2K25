/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:41:58 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 11:17:42 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i <= (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i ++;
	}
}

/*
int main()
{
	int tab[] = {17, 1, 2, 3, 4, 5, 6, 7, 8};
	ft_rev_int_tab(tab, 9);
	for (int i = 0; i < 9; i++)
		printf("%d, ", tab[i]);
	return 0;
}
*/