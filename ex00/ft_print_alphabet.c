/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:54:23 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/09 15:17:53 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void)
{
	char converter;
	int count;
	count = 0;
	while (count < 26)
	{
		converter = 'a' + count;
		ft_putchar(converter);
		count ++;
	}
}
