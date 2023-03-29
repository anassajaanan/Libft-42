/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:07:59 by aajaanan          #+#    #+#             */
/*   Updated: 2023/03/28 11:07:59 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<stdlib.h>

// LIBC FUNCTIONS
int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t num);
void	*ft_calloc(size_t nbr_elmts, size_t size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t num);
void	*ft_memchr(const void *str, int c, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *str, int c, unsigned int num);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, unsigned int n);
char	*ft_strnstr(const char *str, const char *sub, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
// Aditional Functions
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(const char *str, char sep);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *str, unsigned int start, size_t len);
#endif