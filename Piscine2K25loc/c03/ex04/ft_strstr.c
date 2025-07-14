/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:39:10 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 13:46:02 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (to_find[j+1] == '\0')
			return (&str[i-j]);
		if (str[i] == to_find[j])
			{
				check = 1;
				j ++;
			}
		else
		{
			check = 0;
			j = 0;
		}
		i ++;
	}
	return "\0";
}

/*
int main(int argc, char const *argv[])
{
	char str1[50] = "helloWorldHowAreYou";
	char str2[] = "World";
	printf("%s\n", ft_strstr(str1, str2));
	return 0;
}
*/