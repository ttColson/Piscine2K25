/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:09:03 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 10:23:06 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	*c;
	char	ch;

	c = str;
	i = 0;
	while (c[i] != '\0')
	{
		ch = c[i];
		write(1, &ch, 1);
		i ++;
	}
}

/*
int main(int argc, char const *argv[])
{
	ft_putstr("toto");
	return 0;
}
*/