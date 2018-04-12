/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:47:25 by lapain            #+#    #+#             */
/*   Updated: 2018/04/11 18:00:13 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	get_next_line(const int fd, char **line)
{
	char buf[128];
	int size; 
	int i;
	(void)line;
	
	size = read(fd, buf, 127);
	buf[size] = 0;
	i = 0;
	while(buf[i])
	{
		ft_putchar(buf[i]);
		i++;
	}	
}
