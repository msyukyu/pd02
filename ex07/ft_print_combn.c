/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 19:08:27 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/09 20:24:27 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_combn(int n)
{
	int crow;
	int cvalue;
	int lmrow;
	int lmvalue;
	bool first;
	first = true;
	crow = 0;
	cvalue = 0;
	mrow = 0;
	mvalue = 0;
	while ( ! (mrow == 0 && mvalue == 9 - n + 1))
	{
		if (first)
		{
			first = false;
		}
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		while (crow < n)
		{
			if (crow == mrow)
			{
				cvalue = mvalue;
			}
			ft_putchar(cvalue + '0');
			
			crow ++;
		}
	}
}

int main()
{
	int n;
	n = 9;
	ft_print_combn(n);
	return (0);
}
