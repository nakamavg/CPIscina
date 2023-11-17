/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:06:49 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/17 05:16:11 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*destination;

	destination = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src = src + 1;
		dest = dest + 1;
		n = n - 1;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest = dest + 1;
		n = n - 1;
	}
	return (destination);
}
