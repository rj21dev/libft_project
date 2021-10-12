/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:30:31 by rjada             #+#    #+#             */
/*   Updated: 2021/10/10 19:01:50 by rjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_extreme(int res, unsigned long long extreme, int sign);

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					res;
	unsigned long long	extreme;

	sign = 1;
	res = 0;
	extreme = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		extreme = extreme * 10 + str[i] - '0';
		++i;
	}
	return (ft_extreme(res, extreme, sign));
}

static int	ft_extreme(int res, unsigned long long extreme, int sign)
{
	unsigned long long	min;
	unsigned long long	max;

	min = 9223372036854775808UL;
	max = 9223372036854775807UL;
	if (extreme > max && sign == 1)
		return (-1);
	if (extreme > min && sign == -1)
		return (0);
	return (res * sign);
}
