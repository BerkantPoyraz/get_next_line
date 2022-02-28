#ifndef   GET_NEXT_LINE_H
# define  GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t  ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char    *ft_strchr(const char *str, int c);
char    *ft_line(char *src);
char    *ft_line_save(char *src);
char    *ft_first_line(char *src, int fd);
char    *get_next_line(int fd);

#endif