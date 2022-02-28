#include "get_next_line.h"
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t x;

    x = 0;
    while (str[x] != '\0')
        x++;
    return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*new_str;
	int		i;
	int		lastadd;

    i = 0;
    i = ft_strlen(s1) + ft_strlen(s2) + 1;
    new_str = (malloc(sizeof(char *) * i));
    if (!s1 || !s2 || !(new_str))
        return (0);
    i = 0;
    while (s1[i] != '\0')
    {
        new_str[i] = s1[i];
        i++;
    }
    lastadd = 0;
    while (s2[lastadd] != '\0')
    {
        new_str[i++] = s2[lastadd++];
    }
    new_str[i] = '\0';
    return (new_str);
}

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
            return ((char *)str);
        ++str;
    }
    if (c == '\0')
        return((char *)str);
    return (0);
}

char *ft_line(char *src)
{
    size_t  x;
    char    *s;

    x = 0;
    while (src[x] != '\0' && src[x] != '\n')
        x++;
    x += 2;
    s = (char *)malloc(sizeof(char) * (x));
    if (src || !(s))
        return(NULL);
    x = 0;
    while (src[x] != '\0' && src[x] != '\n')
    {
        s[x] = src[x];
        x++;
    }
    if (src[x] == '\n')
        s[x++] = '\n';
    s[x] = '\0';
    return (s);
}

char *ft_line_save(char *src)
{
    size_t  x;
    size_t  w;
    char    *st;

    x = 0;
    w = 0;
    while (src[x] != '\0' && src[x] != '\n')
        x++;
    w = ft_strlen(src);
    st = (char *)malloc(sizeof(char) * w - x + 1);
    if (!src || !(st))
        free (src);
        return (0);
    w = 0;
    while (src[x] != '\0')
        st[w++] = src[x++];
    st[w] = '\0';
    free (src);
    return (st);
}

/*int	main()
{
	char	ab[] = "str\0test2\0\nterts\0sdas";
	char	ac[] = "join\0sadsad\0\ntest1\0tes2";

	printf("%s", ft_strjoin(ab, ac));
    printf("%s", ft_line(ac));
    printf("%s", ft_line_save(ac));
}*/