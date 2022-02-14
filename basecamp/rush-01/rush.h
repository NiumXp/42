/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:37:43 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/13 23:08:28 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# define TRUE 1
# define FALSE 0

# define FL_STDOUT 1

# define TOTAL_NUMBERS 16
# define DIMENSION 4
# define ROWS DIMENSION
# define COLS DIMENSION

# define NIL (unsigned int *)0

# include <unistd.h>
# include <malloc.h>

typedef unsigned int	t_uint;
typedef char			t_byte;
typedef int				t_bool;
typedef void *			t_ptr;

typedef struct s_watchers
{
	t_uint	left;
	t_uint	right;
}	t_watchers;

// matrices.c
t_uint		**ft_create_matrix(void);
void		ft_print_matrix(t_uint **matrix);
void		ft_free_matrix(t_uint **matrix);
void		ft_fill_matrix(t_uint **matrix);

// put.c
void		ft_putchar(char chr);
void		ft_putstr(char *str);
void		ft_puterror(void);

// string.c
t_uint		ft_strlen(char *str);
t_bool		ft_isdigit(char chr);
t_bool		ft_str_is_numeral(char *str);

// vector.c
t_uint		*ft_split_str_vector(char *str);
t_uint		*ft_range_vector(t_uint *vector, t_uint line);
void		ft_free_vector(t_uint *vector);
t_bool		ft_solve_matrix(t_uint **matrix, t_uint *vector);

// backtracking.c
t_bool		ft_backtracking(
				t_uint **matrix,
				t_uint *vector,
				t_uint column,
				t_uint line
				);
t_uint		*ft_get_options(t_uint **matrix, t_uint x, t_uint y);
t_bool		ft_is_valid_solution(t_uint **matrix, t_uint *vector);
t_bool		ft_is_valid_line(t_watchers	w, t_uint	*line);

t_watchers	ft_getwatchers(t_uint *vector, t_uint y);

#endif
