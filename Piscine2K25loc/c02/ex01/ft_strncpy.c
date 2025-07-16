/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:39:57 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 12:07:32 by tcolson          ###   ########.fr       */
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
			end = 1;
		if (!end)
			dest[i] = src[i];
		else
			dest[n] = '\0';
		i ++;
	}
	return (&dest);
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