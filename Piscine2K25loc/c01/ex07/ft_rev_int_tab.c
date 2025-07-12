/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:41:58 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/12 15:12:54 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	*ch;

	i=0;
	while (i <= (size / 2))
	{
		ch[i] = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = ch[i];
	}

	//while (tab[i] != '\0')
	//{
	//tab[i] = tab[size - i];
	//	tab[size - i] = ch[i];
	//}
}

int main(int argc, char const *argv[])
{
	int *tab = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	ft_rev_int_tab(&tab, 9);
	printf("%d", &tab[0]);
	return 0;
}
