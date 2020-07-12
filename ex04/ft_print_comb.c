/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obmlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:53:20 by obmlambo          #+#    #+#             */
/*   Updated: 2020/07/12 10:47:13 by obmlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1 ,&c, 1);
}
void ft_print_comb(void)
{
	char a;
		char b;
		char c;

		a = '0';
		while(a <= '7')
		{
			b = a + 1;
			while(b <= '8')
			{
				c = b + 1;
				while( c <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);

					if(a != '7')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					c++;
				}
				b++;
			}
			a++;
		}
		ft_putchar( '/n' );
}



		

