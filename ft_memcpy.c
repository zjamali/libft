/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:30:20 by zjamali           #+#    #+#             */
/*   Updated: 2019/10/22 19:19:40 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*srct;
	char		*destt;

	srct = src;
	destt = dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if(dest == src)
		return (dest);
	while (i < n)
	{
		destt[i] = srct[i];
		i++;
	}
	return (dest);
}
