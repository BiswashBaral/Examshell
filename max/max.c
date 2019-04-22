/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 00:02:41 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/22 00:11:33 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	if (len == 0)
		return 0;
	int i;
	int max;

	i = 0;
	max = tab[i];
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return max;
}


int main()
{
	int a[] = {1, 2, 4, 4, 7, 2};
	int len = 6;
	int j = max(a, len);
	printf("%d", j);
	return (0);

}
