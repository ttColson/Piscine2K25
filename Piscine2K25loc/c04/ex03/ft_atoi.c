/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:37:55 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/16 09:52:44 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	scan;
	int	n;

	i = 0;
	minus = 1;
	scan = 1;
	n = 0;
	if (str[0] + str[1] + str[2] != 3 * ' ' || (str[3] != '-' && str[3] != '+'))
		return (n);
	while (scan)
	{
		if (str[i] == '-')
			minus *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10 + (str[i] - '0');
			scan = 2;
		}
		else if (scan == 2)
			scan = 0;
		i ++;
	}
	return (n * minus);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_atoi("   -+-65141toto-645"));
// 	return 0;
// }