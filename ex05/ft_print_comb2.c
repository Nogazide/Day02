#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = '0';
	b = '0';

	while (a < 100)
	{
		b = a + i;
		
		while (b > 100)
		{
					if (a < b)
					{
						ft_putchar(a / 10 + '0');
						ft_putchar(a  / 10 + '0');
						ft_putchar(' ');
						ft_putchar(b / 10 + '0');
						ft_putchar(b / 10 + '0');
						ft_putchar(',');
						return(0);
			     	}
			 b++;
		}	
		 a++;
	}
   
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
