/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:29:43 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 16:48:11 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i ++;
	}
	return (1);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "051816515176513";
// 	int n = ft_str_is_numeric(str);
// 	printf("%d", n);
// 	return 0;
// }