/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:09:24 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 12:17:45 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '0' && s2[i] != '0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i ++;
	}
	return (0);
}

/*
int main(int argc, char const *argv[])
{
	char *str1 = "toto";
	char *str2 = "toto";
	int n = ft_strcmp(str1, str2);
	printf("%d", n);
	return 0;
}
*/