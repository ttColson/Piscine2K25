/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:56:48 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/17 16:33:48 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	i;
	char c;

	i = 0;
	c = '\n';
	if (argc == 1)
	{
			while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i ++;
		}
		write(1, &c, 1);
		return (0);
	}
}
