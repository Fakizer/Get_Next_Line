#include "get_next_line.h"
#include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int main(int ac, char **av) 
{ 
    int fd1;
    int fd2; 
    /*int fd2; 
    int fd3;*/ 
    char *str; 
    int i; 
    fd1 = open(av[1], O_RDONLY);
    fd2 = open(av[2], O_RDONLY);
    if (ac > 1)
    {
        i = get_next_line(fd1, &str);
        printf("retfd1 = %d      str = %s\n", i, str);
        free(str);
        i = get_next_line(fd2, &str);
        printf("retfd2 = %d      str = %s\n", i, str);
        free(str);
        i = get_next_line(fd1, &str);
        printf("retfd1 = %d      str = %s\n", i, str);
        free(str);
        i = get_next_line(fd2, &str);
        printf("retfd2 = %d      str = %s\n", i, str);
        free(str);
        i = get_next_line(fd1, &str);
        printf("ret = %d      str = %s\n", i, str);
        free(str);
        i = get_next_line(fd2, &str);
        printf("ret = %d      str = %s\n", i, str);
        free(str);
         i = get_next_line(fd1, &str);
        printf("ret = %d      str = %s\n", i, str);
        free(str);
         i = get_next_line(fd1, &str);
        printf("ret = %d      str = %s\n", i, str);
        free(str);
        // i = get_next_line(fd1, &str);
        // printf("ret = %d      str = %s\n", i, str);
        // free(str);
        // i = get_next_line(fd2, &str);
        // printf("ret = %d      str = %s\n", i, str);
        // free(str);
        // i = get_next_line(fd1, &str);
        // printf("ret = %d      str = %s\n", i, str);
        // free(str);
        // i = get_next_line(fd2, &str);
        // printf("ret = %d      str = %s\n", i, str);
        // free(str);
        // i = get_next_line(fd1, &str);
        // printf("ret = %d      str = %s\n", i, str);
        // free(str);
        // i = get_next_line(fd2, &str);
        // printf("ret = %d      str = %s\n", i, str);
        // free(str);
    }
    
    close(fd1);
    close(fd2);
    return (0); 
}

// gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line.h libft/libft.a libft/libft.h