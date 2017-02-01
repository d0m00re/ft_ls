/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ori.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 05:03:18 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 20:24:41 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ORI_H
# define FT_ORI_H

/*
**	typedef	unsigned long size_t;
*/
# include <string.h>

# include <dirent.h>

# define BUFF_SIZE 32

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

int						ft_rep_nb_file(char *path);

char					*ft_str_extract_with_pos(char *str, int c1, int c2);

void					ft_sorted_tab(int argc, char **argv, int c);

int						ft_getopt(int argc, char *const *argv,\
						const char *optstring);

DIR						*ft_recup_dir_data(char *name);

void					ft_init_tab_int(int *tab, int size,\
						int value);

int						ft_size_int(int nb);

int						ft_size_long(long nb);

char					*ft_itoa_base(int n, int base);

char					*ft_itoa_base_ui(unsigned int n, int base);

char					*ft_itoa_base_li_uli(long int n, int base);

char					*ft_str_return_extract_line_behind_sep\
						(char *str, char c);

void					ft_str_cut_includ_behind_sep(char *str, char c);

int						ft_str_resize_concat(char **str, char *cp);

int						ft_sqrt(int nb);

void					*ft_memset(void *b, int c, size_t len);

void					*ft_memcpy(void *dst, const void *src, size_t n);

void					*ft_memccpy
						(void *dst, const void *src, int c, size_t n);

void					*ft_memchr(const void *s, int c, size_t n);

void					ft_bzero(void *s, size_t n);

void					ft_putchar(char c);

void					ft_putchar_uc(unsigned char c);

void					ft_putchar_all_ascii(unsigned char c);

void					ft_putstr(char const *s);

void					ft_putstr_nb_char(char c, int nb);

void					ft_putnbr(int nb);

void					ft_putnbr_ui(unsigned int nb);

void					ft_putnbr_li(long int nb);

void					ft_putnbr_li_u(unsigned long int nb);

void					ft_putnbr_l(long nb);

void					ft_putnbr_ll(long long nb);

int						ft_atoi(const char *str);

void					ft_swap(int *a, int *b);

size_t					ft_strlen(const char *s);

char					*ft_strdup(const char *s1);

char					*ft_strcpy(char *dst, const char *src);

char					*ft_strncpy(char *dest, const char *src, size_t n);

char					*ft_strncat(char *s1, const char *s2, size_t n);

char					*ft_strcat(char *s1, const char *s2);

char					*ft_strchr(const char *s, int c);

char					*ft_strrchr(const char *s, int c);

char					*ft_strstr(const char *big, const char *little);

char					*ft_strnstr(const char *big, const char *little,\
						size_t len);

int						ft_strcmp(const char *s1, const char *s2);

int						ft_strncmp(const char *s1, const char *s2, size_t n);

int						ft_isascii(int c);

void					ft_memdel(void **ap);

void					*ft_memalloc(size_t size);

char					*ft_strnew(size_t size);

void					ft_strdel(char **as);

void					ft_strclr(char *s);

void					ft_striter(char *s, void (*f)(char *));

void					ft_striteri(char *s, void (*f)(unsigned int, char *));

void					ft_putchar_fd(char c, int fd);

void					ft_putstr_fd(char const *s, int fd);

void					ft_putendl(char const *s);

void					ft_putendl_fd(char const *s, int fd);

void					ft_putnbr_fd(int n, int fd);

char					*ft_strmap(char const *s, char (*f)(char));

char					*ft_strmapi
						(char const *s, char (*f)(unsigned int, char));

char					*ft_itoa(int n);

int						ft_strequ(char const *s1, char const *s2);

int						ft_strnequ(char const *s1, char const *s2, size_t n);

char					*ft_strsub
						(char const *s, unsigned int start, size_t len);

char					*ft_strjoin(char const *s1, char const *s2);

char					*ft_strtrim(char const *s);

/*
******************
** GESTION FILE **
******************
*/
int						ft_number_of_line(char *str);

#endif
