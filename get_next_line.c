/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:36:34 by jenibaud          #+#    #+#             */
/*   Updated: 2024/10/29 16:01:11 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFFER_SIZE 1
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*str;
	int		nb;

	str = malloc(BUFFER_SIZE + 1);
	str[BUFFER_SIZE + 1] = '\0';
	nb = read(fd, str, BUFFER_SIZE);
	if (nb < 0)
	{
		free(str);
		return (NULL);
	}
}
