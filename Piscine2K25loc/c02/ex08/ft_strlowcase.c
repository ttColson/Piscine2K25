/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:03:05 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 12:04:40 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += ('a' - 'A');
		i ++;
	}
	return (&str);
}

/*
int main(int argc, char const *argv[])
{
	char str[] = "TOTO";
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
	return 0;
}
*/