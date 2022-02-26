#include "get_next_line.h"

char    *ft_first_line(char *src, int fd)
{
    char    *buff;
    int     size;

    buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buff)
    {
        free(buff);
        return(NULL);
    }
    size = 0;
    while (!ft_strchr(src, '\n' && size + 1 != 0))
    {
        size = read(fd, buff, BUFFER_SIZE);
        if (size < 0)
        {
            free(buff);
            return (NULL);
        }
        buff[size] = '\0';
        src = ft_strjoin(src, buff);
        
    }
    free(buff);
    return (src);    
}

char    *get_next_line(int fd)
{
    char    *first;
    char    *next;

    first = 0;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    next = ft_first_line(next, fd);
    if (!next)
        return(0);
    first = ft_line(next);
    next = ft_line_save(next);
    if (first[0] == 0)
    {
        free(next);
        free(first);
        return (NULL);
    }
    return (first);   
}