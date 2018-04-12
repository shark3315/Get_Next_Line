/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:45:20 by lapain            #+#    #+#             */
/*   Updated: 2018/04/11 17:54:09 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"

void 	get_next_line(const int fd, char **line); 

#endif
