/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:54:23 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/09 15:19:35 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char converter;
	int count;
	count = 25;
	while (count >= 0)
	{
		converter = 'a' + count;
		ft_putchar(converter);
		count --;
	}
}
