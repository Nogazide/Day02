/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogazide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:41:09 by nogazide          #+#    #+#             */
/*   Updated: 2020/07/12 10:48:07 by nogazide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h> 

int ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_print_alphabet(void)
{
	char a, z, ch;
	ch = 'a';
	while(ch <= 'z')
   	{
		ft_putchar(ch);
		ch++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return(0);
}


