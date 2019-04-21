/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 05:04:15 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/21 05:17:57 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int main()
{
	char *a = "adaef";
	char *b = "adae";
	printf("%d \n",ft_strcmp(a,b));
	printf("%d \n",strcmp(a,b));
	//printf("%d \n",ft_strcmp(a,b));
	return(0);
}
