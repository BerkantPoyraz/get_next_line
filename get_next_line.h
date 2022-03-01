/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoyraz <bpoyraz@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:17:10 by bpoyraz           #+#    #+#             */
/*   Updated: 2022/03/01 13:19:46 by bpoyraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   GET_NEXT_LINE_H
# define  GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.>
# include <fcntl.h>

size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *src, int c);
char	*ft_line(char *src);
char	*ft_line_save(char *src);
char	*ft_first_line(char *src, int fd);
char	*get_next_line(int fd);

#endif
