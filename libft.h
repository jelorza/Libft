/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:58:14 by jelorza-          #+#    #+#             */
/*   Updated: 2021/11/10 20:59:23 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_isdigit(int a);
int		ft_isalpha(int a);
int		ft_isalnum(int a);
int		ft_isascii(int a);
int		ft_isprint(int a);
size_t	ft_strlen(const char *s);
//escribe len bits de c en la cadena b. 
//Hay que castear todo y tambien el int c a unsigned char.
void	*ft_memset(void *b, int c, size_t len);
//es como el memset pero mete n bits de 0 en s
void	ft_bzero(void *s, size_t n);
// copia n bists de src a dst pero no tiene en cuenta el overlap.
// entonces si dst es mas grande que src no hace nada.
void	*ft_memcpy(void *dst, const void *src, size_t n);
//es como el memcpy pero tiene en cuenta el overlap.
//entonces copiamos el src de atras a adelante para que no haya overlap. 
void	*ft_memmove(void *dst, const void *src, size_t len);
//copia de src a dest la cantidad dstsize -1 
//caracteres por que el ultimo tiene que ser el '\0'
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
//coloca el puntero en el caracter que le mandas como c.
//si no lo encuentra devulve null y si no devuelve el string
//a partir del caracter c ya que el puntero lo hemos colocado ahi
char	*ft_strchr(const char *s, int c);
//es igual que strrch pero coloca el puntero en el ultimo caracter c del string;
char	*ft_strrchr(const char *s, int c);
//compara dos estring en los n caracteres mandados en el tercer parametro.
// si son iguales devulve 0 y si no la diferencia que hay
// en ascii de un caracter al otro ya sea - o +
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

#endif
