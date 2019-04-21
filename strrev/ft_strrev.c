/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 06:09:54 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/21 06:19:41 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strrev(char *str)
{
	int i;
	char *s;
	int j;
	int k;

	j = 0;
	i = 0;
	while(str[i])
		i++;
	k = i;
	s = (char*)malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return NULL;
	while(j < k )
	{
		s[j] = str[i - 1];
		j++;
		i--;
	}
	s[j] = '\0';
	return(s);
}

int main()
{
	char *a = "DKFH";
	printf("%s", ft_strrev(a));
	return(0);
}
