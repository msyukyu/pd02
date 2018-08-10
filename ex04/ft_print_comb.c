/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:39:46 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 09:22:01 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_display_digits(int digit_0, int digit_1, int digit_2)
{
	if (!(digit_0 == 0 && digit_1 == 1 && digit_2 == 2))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar('0' + digit_0);
	ft_putchar('0' + digit_1);
	ft_putchar('0' + digit_2);
}

void	ft_print_comb(void)
{
	int	digit_0;
	int	digit_1;
	int	digit_2;

	digit_0 = 0;
	digit_1 = 1;
	digit_2 = 2;
	while (digit_0 < 10)
	{
		while (digit_1 < 10)
		{
			while (digit_2 < 10)
			{
				ft_display_digits(digit_0, digit_1, digit_2);
				digit_2++;
			}
			digit_1++;
			digit_2 = digit_1 + 1;
		}
		digit_0++;
		digit_1 = digit_0 + 1;
		digit_2 = digit_1 + 1;
	}
}
