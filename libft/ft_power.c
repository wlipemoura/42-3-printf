/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:47:12 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 16:47:25 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int basis, size_t exponent)
{	
	int	basis_backup;

	basis_backup = basis;
	if (exponent == 0)
	{
		if (basis == 0)
			return ('\0');
		else if (basis > 0)
			return (1);
		else
			return (-1);
	}
	while (exponent > 1)
	{
		basis *= basis_backup;
		if (exponent > 0)
			--exponent;
	}
	return (basis);
}
