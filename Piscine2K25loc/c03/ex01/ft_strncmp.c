/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:18:05 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 12:20:22 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
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
	char *str2 = "totoO";
	int n = ft_strncmp(str1, str2, 2);
	printf("%d", n);
	return 0;
}
*/