/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolson <tcolson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:34:23 by tcolson           #+#    #+#             */
/*   Updated: 2025/07/15 11:58:09 by tcolson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_int_to_hex(int n)
{

}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int address = &addr;
	write(1, address, 14);
}

int main(int argc, char const *argv[])
{
	char str[] = "helloworld";
	ft_print_memory(str, 5);
	return 0;
}
