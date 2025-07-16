/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:29:10 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/15 14:29:22 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	return (&dest);
}

// int main()
// {
// 	char str1[] = "hello";
// 	char str2[] = "world";
// 	printf("%s %s\n", str1, str2);
// 	ft_strcpy(str2, str1);
// 	printf("%s %s\n", str1, str2);
// 	return 0;
// }