/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 18:32:43 by mmthombe          #+#    #+#             */
/*   Updated: 2017/10/01 18:36:32 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	*ft_memalloc(size_t size);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strnew(size_t size);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int data, size_t byte);

#endif
