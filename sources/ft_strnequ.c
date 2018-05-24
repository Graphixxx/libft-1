/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:12:21 by swilson           #+#    #+#             */
/*   Updated: 2018/05/22 14:19:49 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (((s1[i] == '\0') &&( s2[i] == '\0')) || (n == 0 ))
			return (1);
		i++;
		n--;
	}
	return (0);
}
