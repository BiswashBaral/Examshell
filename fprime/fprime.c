/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 19:03:18 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/26 22:19:33 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//Hard to remove * from last one..

int isprime(int n)
{
	int i;

	i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return (i);
}

int fprime(int n)
{
	int i;
	int j;
	
		
	i = 2;
	if(n == 1)
		printf("%d", 1);
	while(i <= n)
	{	
		j = isprime(i);
		if (j != 0)
		{
			if( n % j == 0)
			{
				printf("%d", j);
				printf("%c", '*');
			}
		}
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		fprime(atoi(av[1]));
		//write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

/*
int main()
{	
	printf("%d",isprime(6));
	return(0);

}
*/
