/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 04:35:34 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/21 05:03:09 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char*str)
{
	int i;
	int res;
	int neg;
	
	i = 0;
	res = 0;
	neg = 0;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if(str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res  * 10;
		res = res + (int)str[i] - '0';
		i++;
	}
	if(neg == 1)
		return ( -1 * res);
	else
		return(res);
}

int main()
{
	printf("%d", ft_atoi("   124"));
	return(0);
}
