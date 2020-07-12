#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);

}
int main (){

	char ch;
	
	ch = '0';
		
		while(ch <= '9')
		{
			ft_putchar(ch);
			ch++;
		}
	return 0;
}
