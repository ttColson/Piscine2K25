/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:34:16 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 16:11:59 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (j < nb)
	{
		dest[i + j] = src[j];
		j ++;
	}
	return (dest);
}


int main(int argc, char const *argv[])
{
	char str1[50] = "hello";
	char str2[] = " world !";
	printf("%s\n", str1);
	printf("%s\n", ft_strncat(str1, str2, 10));
	printf("%s\n", str1);
	return 0;
}
