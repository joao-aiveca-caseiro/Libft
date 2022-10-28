/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:36:30 by jaiveca-          #+#    #+#             */
/*   Updated: 2022/10/28 12:51:07 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (ptr[i] && i < n - 1)
	{
		if (ptr[i] == c)
			return ((char *)(ptr + i));
		i++;
	}
	if (ptr[i] == c)
		return ((char *)(ptr + i));
	return (NULL);
}
