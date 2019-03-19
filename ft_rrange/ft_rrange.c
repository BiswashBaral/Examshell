/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 00:59:17 by biswbara          #+#    #+#             */
/*   Updated: 2019/03/19 01:41:27 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *arr;
	int i;
	int len;

	if(start > end)
		return (NULL);
	len = (end - start);
	i = 0;
	arr = (int *)malloc(sizeof(int) * len + 1);
	while(i <= len)
	{
		arr[i] = end - i;
		i++;
	}
	return (arr);
}

int   main(void)
{
int* res;
int i;

res = ft_rrange(5, 10);

for (i = 0; i < 6; i++)
  printf("%d,", res[i]);
printf("\n");
	return(0);
}

