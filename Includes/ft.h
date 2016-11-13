/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 02:01:11 by nmanon            #+#    #+#             */
/*   Updated: 2016/09/30 20:41:36 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <string.h>
#

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strupcase(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		find(char *str, char *to_find);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_swap(int *a, int *b);
void	*ft_memset (void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	ft_memcpy(void *s1, const void *s2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	*memccpy(void *s1, const void *s2, int c, size_t n);
void	ft_putstr_fd(char const *s, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);

#endif
