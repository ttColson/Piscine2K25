/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:41:03 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 12:11:56 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= ('a' - 'A');
		i ++;
	}
	return (&str);
}

// int main(int argc, char const *argv[])
// {
// 	char str[] = "toto";
// 	printf("%s\n", str);
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	return 0;
// }