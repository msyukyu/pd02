/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:54:23 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/09 12:10:48 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_numbers(void)
{
	char converter;
	int count;
	count = 0;
	while (count < 10)
	{
		converter = '0' + count;
		ft_putchar(converter);
		count++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}
