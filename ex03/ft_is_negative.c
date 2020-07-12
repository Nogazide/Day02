#include <unistd.h>

int ft_putchar(char n)
{
	write(1, &n , 1);
}

void ft_is_negative(int n)
{
	char  N, P;

	if(n <0)
	{
		ft_putchar('N');
	}
	else
	
	{	
		ft_putchar('P');
	}
}

int main(void)
{
	int check;

	check = -20;


	ft_is_negative(check);
	return(0);

}
