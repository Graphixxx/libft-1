/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:11:59 by swilson           #+#    #+#             */
/*   Updated: 2018/05/22 08:15:55 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *c)
{
	int i;
	
	i = 0;
	while (c[i] != '\0')
		c[i++] = '\0';
}