/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:47:55 by lapain            #+#    #+#             */
/*   Updated: 2018/04/11 21:11:49 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int 	main(int argc, char** argv)
{
	char **line; 
	int fd;

	line = NULL;
	if(argc != 2)
	{
		ft_putendl("usage : ./get_next_line file");
		return(0);
	}
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		ft_putendl("open() failed");
		return(-1);
	}
	get_next_line(fd, line);	 
	close(fd); 	
	return(0);
}
