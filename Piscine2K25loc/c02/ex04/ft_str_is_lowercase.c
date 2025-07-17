/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:31:46 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 16:48:15 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i ++;
	}
	return (1);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "asasagsfdsdf";
// 	int n = ft_str_is_lowercase(str);
// 	printf("%d", n);
// 	return 0;
// }