/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:42:50 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/26 20:26:11 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_isprime(unsigned int k)
{
	int i;
	int j;

	j = 2;
	i = 0;
	while(j < k)
	{
		if(k % j == 0)
			return 0;
		j++;
	}
	return 1;
}

int ft_prime_sum(int l)
{
	int x;
	int y;

	x = 2;
	y = 0;
	while(x <= l)
	{
		if(ft_isprime(x))
			y = y + x;
		x++;
	}
	return y;
}

int main(int ac, char **av)
{

	int z;


	if(ac == 2)
	{
		z = ft_prime_sum(atoi(av[1]));
		write(1, "\n", 1);
		printf("%d", z);
		
	}
	else
		write(1, "\n", 1);
}
