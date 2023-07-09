#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>


int     ft_isalpha(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
void    *ft_memset(void *b, int c, size_t n);
void    *ft_memmove(void *destination, const void *source, size_t num);
size_t  strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *c);

void	ft_bzero(void *s, size_t n);


#endif
