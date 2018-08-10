/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:25:36 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 10:30:40 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	divisor;
	int	digit;

	divisor = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (divisor > 0)
	{
		digit = (nb / divisor) % 10;
		if (nb < 0)
		{
			digit *= -1;
		}
		ft_putchar(digit + '0');
		if (divisor == 1)
		{
			divisor = 0;
		}
		else
		{
			divisor /= 10;
		}
	}
}
