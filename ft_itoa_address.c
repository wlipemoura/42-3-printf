/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_address.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:03:40 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 16:03:45 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_itoa_address(unsigned long address)
{
	char	*prefix;
	char	*temp;
	char	*returning;

	prefix = "0x";
	temp = ft_itoa_base(address, 16);
	returning = ft_strjoin(prefix, temp);
	free(temp);
	return (returning);
}
