/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:54:23 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 10:28:32 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	converter;
	int		count;

	count = 0;
	while (count < 10)
	{
		converter = '0' + count;
		ft_putchar(converter);
		count++;
	}
}
