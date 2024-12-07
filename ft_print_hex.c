/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoukouj <khoukouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:26:34 by khoukouj          #+#    #+#             */
/*   Updated: 2024/11/07 18:27:05 by khoukouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(unsigned long add, int *size)
{
	if (add > 15)
		print_hex(add / 16, size);
	*size += write(1, &"0123456789abcdef"[add % 16], 1);
}

void	print_address(unsigned long add, int *size)
{
	ft_putstr("0x", size);
	print_hex(add, size);
}

void	print_lowcase_hex(unsigned int nbr, int *size)
{
	if (nbr > 15)
		print_hex(nbr / 16, size);
	*size += write(1, &"0123456789abcdef"[nbr % 16], 1);
}

void	print_upcase_hex(unsigned int nbr, int *size)
{
	if (nbr > 15)
		print_upcase_hex(nbr / 16, size);
	*size += write(1, &"0123456789ABCDEF"[nbr % 16], 1);
}

// #include <stdio.h>

// int main(void)
// {
// 	int i = 0;
// 	 unsigned long khrya= 5463164;
// 	 print_upcase_hex(khrya, &i);
// }