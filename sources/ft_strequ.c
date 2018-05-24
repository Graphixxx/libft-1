/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:05:17 by swilson           #+#    #+#             */
/*   Updated: 2018/05/22 14:11:30 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') &&( s2[i] == '\0'))
			return (1);
		i++;
	}
	return (0);
}
