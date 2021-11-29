/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:09:25 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/29 10:17:47 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	size_t				i;
	unsigned long int	res;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	else if (res > 9223372036854775807 && sign == 1)
		return (-1);
	return (res * sign);
}	
