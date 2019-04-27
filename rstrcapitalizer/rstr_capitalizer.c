/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:06:01 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/22 19:29:41 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char  *to_lower(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		i++;
	}
	return (s);
}

char *rstr(char *n)
{
	int i;
	char *s;
	
	s = to_lower(n);
	i = 0;
	while(s[i])
	{
		if((s[i + 1] == '\0' || s[i + 1] == ' ' || s[i + 1] == '\t') && (s[i] >= 'a' && s[i] <= 'z')) 
		{
			s[i] = s[i] - 32;
		}
		write(1, &s[i], 1);
		i++;
	}
	return (s);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if(ac > 1)
	{
		
		while(i < ac)
		{
			rstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}

