/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:20:59 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/15 14:23:42 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

// int main(int argc, char const *argv[])
// {
// 	char str[] = "helloworld";
// 	printf("%d", ft_strlen(str));
// 	return 0;
// }