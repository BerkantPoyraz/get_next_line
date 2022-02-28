#include "get_next_line.h"
#include <stdio.h>

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
    next = 0;
    next = ft_first_line(next, fd);
    if (fd < 0 || BUFFER_SIZE <= 0 || !(next))
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

int main(void)
{
    char *asd;
    asd = malloc(sizeof(char *) * (BUFFER_SIZE));
    int filed2 = open("test3.txt", O_RDONLY);
    int filed = open("test0.txt", O_RDWR);
    printf("%i\n", filed);
    printf("%i\n", filed2);
    while (filed != EOF)
    {
        if (asd == '\0')
            break ;
        asd = get_next_line(filed);
        printf("%s\n", asd);
    }
    return (0);
}