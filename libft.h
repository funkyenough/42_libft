#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memccpy(void *dest, const void *src, int c, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
int		ft_strlen(char *str);

#endif