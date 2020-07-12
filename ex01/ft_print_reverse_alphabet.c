#include <unistd.h>

int ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_print_reverse_alphabet(void)
{
	char  a, z, ch;
	ch= 'z';
	while(ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
