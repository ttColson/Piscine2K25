/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:26:49 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 09:46:47 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 96;
	while (i < 123)
	{
		write(1, &i, 1);
		i ++;
	}
}

/*
int main(int argc, char const *argv[])
{
	ft_print_alphabet();
	return 0;
}
*/