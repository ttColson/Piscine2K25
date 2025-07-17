/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:09:09 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 15:19:15 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j ++;
		}
		i ++;
	}
}

// int main()
// {
// 	int tab[] = {17, 15, 22, 3, 5, 4, 6, 7, 8};
// 	ft_sort_int_tab(tab, 9);
// 	for (int i = 0; i < 9; i++)
// 		printf("%d, ", tab[i]);
// 	return 0;
// }