/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 04:14:08 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/21 04:33:59 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int do_op(char *a, char b, char *c)
{
	int aa;
	int cc;
	int res;

	aa = atoi(a);
	cc = atoi(c);

	if(b == '+')
		res = aa + cc;	
	if(b == '-')
		res = aa - cc;	
	if(b == '*')
		res = aa * cc;	
	if(b == '/')
		res = aa / cc;	
	if(b == '%')
		res = aa % cc;	
	return res;
}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		printf("%d",do_op(av[1], av[2][0], av[3]));
		printf("%s","\n");
	}
	else
		printf("%s","\n");
	return 0;
}
