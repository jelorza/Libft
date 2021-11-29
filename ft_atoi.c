/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:09:25 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/29 09:51:03 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	size_t				c;
	unsigned long int	str2;

	sign = 1;
	c = 0;
	str2 = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if ((str[c] == '+' || str[c] == '-') && str[c] != '\0')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while ((str[c] >= '0' && str[c] <= '9') && str[c] != '\0')
	{
		str2 = (str[c] - '0') + (str2 * 10);
		c++;
	}
	if (str2 > 9223372036854775807 && sign == -1)
		return (0);
	else if (str2 > 9223372036854775807 && sign == 1)
		return (-1);
	return (str2 * sign);
}	
