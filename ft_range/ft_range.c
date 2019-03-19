/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 12:05:18 by biswbara          #+#    #+#             */
/*   Updated: 2019/03/19 01:30:37 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	*ft_range(int start, int end)
{
	int *array;
	int i;
	int len;

	i = 0;

	len = end - start;
	if(start > end)
		return(NULL);
	array = (int *)malloc(sizeof(int) * len + 1);
	while(i <= len)
	{
		array[i] = start + i;
		i++;
	}
	return(array);
}

int   main(void)
{
int* res;
int i;

res = ft_range(5, 10);

for (i = 0; i < 6; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-20, -15);
for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-2147483648, -2147483646);
for (i = 0; i < 1; i++)
	printf("%d,", res[i]);
printf("\n");

res = ft_range(10, 5);
printf("%x\n", (unsigned int)res);
}
