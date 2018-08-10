/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 19:08:27 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 12:09:21 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_display_digits(int digits[], int usable_size)
{
	int		n;

	n = 0;
	if (!(digits[0] == 0 && digits[usable_size - 1] == usable_size - 1))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (n < usable_size)
	{
		ft_putchar(digits[n] + '0');
		n++;
	}
}

void	ft_fill_array(int digits[], int usable_size)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (i < usable_size)
		{
			digits[i] = i;
		}
		else
		{
			digits[i] = -1;
		}
		i++;
	}
}

int		ft_compute_min_value(int digits[], int i)
{
	int		min;
	int		j;

	j = i;
	min = 9;
	while (j > 0)
	{
		if (min > digits[j - 1] + i - (j - 1) + 1)
			min = digits[j - 1] + i - (j - 1) + 1;
		j = j - 1;
	}
	return (min);
}

void	ft_print_combn(int n)
{
	int		digits[9];
	int		i;

	ft_fill_array(digits, n);
	i = n - 1;
	while (digits[0] != 10 - n + 1)
	{
		ft_display_digits(digits, n);
		while (digits[i] + 1 > 10 - n + i && i > 0)
		{
			digits[i] = ft_compute_min_value(digits, i);
			i = i - 1;
		}
		digits[i] += 1;
		i = n - 1;
	}
}
