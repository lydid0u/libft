/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:13:09 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 14:13:09 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int					ft_isprint(int c);
int					ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
void				ft_bzero(void *s, size_t n);
size_t				ft_strlcpy(char *s1, const char *s2, size_t n);
void				*ft_memset(void *ptr, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *destination, const void *source, size_t n);
void				*ft_memmove(void *destina, const void *source, size_t n);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strdup(char *src);
void				*ft_calloc(size_t nmemb, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_strlen(char *str);
int					ft_strncmp(char *s1, char *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);

#endif