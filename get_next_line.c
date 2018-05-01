/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:47:25 by lapain            #+#    #+#             */
/*   Updated: 2018/04/26 20:53:48 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_readfile(const int fd, char *buff)
{
//	char *buff;
	int	len_read;

//	buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE +1));
//	if(buff == NULL)
//		return(-1);
	len_read = read(fd, buff, BUFF_SIZE);
	return(len_read); 
}

int	get_next_line(const int fd, char **line)
{
	int size; 
	char buff[BUFF_SIZE];
	int i;
	(void)line;
	
	size = ft_readfile(fd, buff);
	buff[size] = 0;
	i = 0;
	while(buff[i])
	{
		ft_putchar(buff[i]);
		i++;
	}
	ft_putchar('\n');
	return(1);	
}
