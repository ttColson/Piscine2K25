/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:13:15 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 12:18:10 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_hex(char c)
{
	int		quot;
	int		mod;
	char	str[4];

	quot = (c / 16) + '0';
	mod = c % 16;
	if (mod >= 10)
		mod = (mod % 10) + 'a';
	else
		mod += '0';
	str[0] = '\\';
	str[1] = quot;
	str[2] = mod;
	str[3] = '\0';
	write(1, &str, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 && str[i] != '\0')
			ft_print_hex(str[i]);
		else
			write(1, &str[i], 1);
		i ++;
	}
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "toto\nhello world";
// 	ft_putstr_non_printable(str);
// 	return 0;
// }