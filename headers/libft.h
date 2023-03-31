#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "structure.h"
# define BUFFER_SIZE 1000

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_strcpy(char *dst, const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_iswhitespace(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		get_next_line(int fd, char **line);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_simple_element_delete(void *elem);

#endif
