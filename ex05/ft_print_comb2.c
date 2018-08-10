/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:37:49 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 10:30:17 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_display_digits_pair(int digits_0, int digits_1)
{
	if (!(digits_0 == 0 && digits_1 == 1))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar((digits_0 / 10) + '0');
	ft_putchar((digits_0 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((digits_1 / 10) + '0');
	ft_putchar((digits_1 % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	digits_0;
	int	digits_1;

	digits_0 = 0;
	digits_1 = 1;
	while (digits_0 < 100)
	{
		while (digits_1 < 100)
		{
			ft_display_digits_pair(digits_0, digits_1);
			digits_1++;
		}
		digits_0++;
		digits_1 = digits_0 + 1;
	}
}
