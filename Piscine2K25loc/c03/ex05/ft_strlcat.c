/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:42:12 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/15 13:59:54 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i ++;
	}
	while (j < size && dest[j])
	{
		dest[i + j] = src[j];
		j ++;
	}
	return (i + j);
}

// // test avec cc -lbsd ft_strlcat.c
// int main(int argc, char const *argv[])
// {
// 	char str1[50] = "hello";
// 	char str2[] = "world";
// 	printf("%s\n", str1);
// 	printf("%d\n", ft_strlcat(str1, str2, 5));
// 	printf("%d\n", strlcat(str1, str2, 5));
// 	printf("%s\n", str1);
// 	return 0;
// }