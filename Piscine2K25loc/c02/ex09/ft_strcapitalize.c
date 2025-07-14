/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:15:39 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/14 15:07:09 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_alpha(char c)
{
	int	i;

	i = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	inword;

	i = 0;
	inword = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha(str[i]))
		{
			if (!inword && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
			else if (inword && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += ('a' - 'A');
			inword = 1;
		}
		else
			inword = 0;
		i ++;
	}
	return (str);
}

/*
int main(int argc, char const *argv[])
{
	char str[] = "hi, hOw ARE you? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(str));
	return 0;
}
*/