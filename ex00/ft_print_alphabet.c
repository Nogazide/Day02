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


