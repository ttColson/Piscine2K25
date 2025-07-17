/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:07:29 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 13:52:12 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i ++;
	}
	while (j < size - 1)
	{
		dest[j] = src[j];
		j ++;
	}
	dest[j] = '\0';
	return (i);
}

// int main(int argc, char const *argv[])
// {
// 	char str1[50] = "hello";
// 	char str2[] = "world !";
// 	printf("%s\n", str1);
// 	printf("%d\n", ft_strlcpy(str1, str2, 10));
// 	printf("%s\n", str1);
// 	return 0;
// }