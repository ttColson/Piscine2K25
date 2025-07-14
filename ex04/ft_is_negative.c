/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:27:02 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 09:54:19 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
		c = 'P';
	else
		c = 'N';
	write(1, &c, 1);
}

/*
int main(int argc, char const *argv[])
{
	ft_is_negative(-1);
	ft_is_negative(5);
	return 0;
}
*/