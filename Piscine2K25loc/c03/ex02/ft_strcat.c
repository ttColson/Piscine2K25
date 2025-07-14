/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:20:43 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 13:45:52 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j ++;
	}
	return (dest);
}

/*
int main(int argc, char const *argv[])
{
	char str1[50] = "hello";
	char str2[] = " world !";
	printf("%s\n", str1);
	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}
*/