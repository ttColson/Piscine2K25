/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:09:03 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/10 16:59:53 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int i;
	char *c = str;

	i = 0;
	while (c[i] != '\0')
	{
		char ch = c[i];
		write(1, &ch, 1);
		i ++;
	}
}

int main(int argc, char const *argv[])
{
	char *str = "abcdefghijklmnop";
	ft_putstr(&str);
	return 0;
}
