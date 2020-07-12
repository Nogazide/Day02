#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c , 1);
}

void ft_print_comb(void)
{
	int a, b, c, z;
	
	a ='0';
	b ='0';
	c ='0';;
	z =' ';

	while(a <= '9')
	{
		while(b <= '9')
		{
			while(c<='9')
			{
				if (a < b && b < c)
				{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
				ft_putchar(' ');
				}
				c++;
			}
			b++;
			c='0';
	}a++;
	b='0';
}
}

int main(void)
{
	ft_print_comb();
	return(0);
}
