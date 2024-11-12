/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:15:51 by jenibaud          #+#    #+#             */
/*   Updated: 2024/11/12 13:34:48 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	
	int fd;
	char *str = NULL;

	fd = open(argv[1], O_RDONLY);
	do {
		free(str);
		str = get_next_line(fd);
		printf("%s", str);
	} while (str != NULL);
	return (0);
}