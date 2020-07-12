/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obmlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:12:58 by obmlambo          #+#    #+#             */
/*   Updated: 2020/07/12 12:11:39 by obmlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


    ft_putchar(' / n ');void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a= '0';
	while(a <='99')
	{
		b= a + 1;
		while(b <='99')
		{
			c= b + 1;
			
			
				{
				
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
	;
}
int main()
{
	ft_print_comb2();
		return (0);
}


