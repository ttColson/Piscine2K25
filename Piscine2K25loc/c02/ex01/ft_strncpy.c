/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:39:57 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 16:48:00 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	end;

	i = 0;
	end = 0;
	while (i < n - 1)
	{
		if (src[i] == '\0')
		{
			dest[n] == '\0';
			return (&dest);
		}
		else
			dest[i] = src[i];
		i ++;
	}
	return (dest);
}

// int main(int argc, char const *argv[])
// {
// 	char str1[] = "hello";
// 	char str2[] = "world";
// 	printf("%s %s\n", str1, str2);
// 	ft_strncpy(str1, str2, 6);
// 	printf("%s %s\n", str1, str2);
// 	return 0;
// }