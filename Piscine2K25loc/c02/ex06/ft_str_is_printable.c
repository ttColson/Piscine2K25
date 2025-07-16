/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:35:47 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 12:11:35 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '!' && str[i] <= '~'))
			return (0);
		i ++;
	}
	return (1);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "TOTO!!!~~+_+)4|\n";
// 	int n = ft_str_is_printable(str);
// 	printf("%d", n);
// 	return 0;
// }