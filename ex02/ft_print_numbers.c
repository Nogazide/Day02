#include <unistd.h>

int ft_putchar(char ch)
{
	write(1, &ch, 1);
	return(0);
}

void ft_print_numbers(void)
{
	char n;
	n= '0';
	while(n<= '9') {
		ft_putchar(n);
		n++;
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);
}

