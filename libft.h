/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:39:59 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/21 22:37:28 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void * ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void * ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char * restrict dst, const char * restrict src,size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src,size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char * ft_strchr(const char *s, int c);
// char * ft_strrchr(const char *s, int c);
// int ft_strncmp(const char *s1, const char *s2, size_t n);
// void * ft_memchr(const void *s, int c, size_t n);
// int ft_memcmp(const void *s1, const void *s2, size_t n);
// char * ft_strnstr(const char *haystack, const char *needle, size_t len);
// int ft_atoi(const char *str);
// void *ft_calloc(size_t count, size_t size);
// char * ft_strdup(const char *s1);
// char * ft_substr(char const *s, unsigned int start,size_t len);
// char * ft_strjoin(char const *s1, char const *s2);
// char * ft_strtrim(char const *s1, char const *set);
// char ** ft_split(char const *s, char c);
// char *ft_itoa(int n);
// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
// void ft_striteri(char *s, void (*f)(unsigned int,char*));
// void ft_putchar_fd(char c, int fd);
// void ft_putstr_fd(char *s, int fd);
// void ft_putendl_fd(char *s, int fd);
// void ft_putnbr_fd(int n, int fd);
// va_list *ft_lstnew(void *content);
// void ft_lstadd_front(va_list **lst, va_list *new);
// int ft_lstsize(va_list *lst);
// va_list *ft_lstlast(va_list *lst);
// void ft_lstadd_back(va_list **lst, va_list *new);
// void ft_lstdelone(va_list *lst, void (*del)(void*));
// void ft_lstclear(va_list **lst, void (*del)(void*));
// void ft_lstiter(va_list *lst, void (*f)(void *));
// va_list *ft_lstmap(va_list *lst, void *(*f)(void *),void (*del)(void *));

#endif