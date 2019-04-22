/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 07:26:36 by biswbara          #+#    #+#             */
/*   Updated: 2019/04/22 00:01:51 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_lastword(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i])
	{
		if((s[i] == ' '  || s[i] == '\t') && (s[i + 1] >= 33 && s[i + 1] <= 127))
			j = i + 1;
		i++;
	}
	while(s[j] >= 33 && s[j] <= 127)
	{
		write(1, &s[j], 1);
		j++;
	}
	write(1, "\n", 1);

}

int main(int ac, char **av)
{
	if(ac == 2)
		ft_lastword(av[1]);
	else
		write(1, "\n", 1);
	return(0);
}
