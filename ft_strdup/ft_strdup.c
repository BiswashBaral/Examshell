/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 05:38:29 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/21 05:59:10 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i;
	char *str;
	int j;

	j = 0;
	i = 0;
	while(src[i])
		i++;
	str = (char*)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while(j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[i] = '\0';
	free(str);
	return (str);
}

int main()
{
	char *a = "adfkah";
	char *b;

	b = ft_strdup(a);
	printf("%s\n",b);
	printf("%s\n",strdup(a));
	return(0);
}
