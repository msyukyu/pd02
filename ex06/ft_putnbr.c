/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:25:36 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 16:49:02 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	divisor;
	int	digit;
	int zero;

	zero = 1;
	divisor = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (divisor > 0)
	{
		digit = (nb / divisor) % 10;
		if (nb < 0)
			digit *= -1;
		if (digit != 0 || zero != 1)
		{
			ft_putchar(digit + '0');
			zero = 0;
		}
		if (divisor == 1)
			divisor = 0;
		else
			divisor /= 10;
	}
}
