/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgibier <tgibier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:34:26 by tgibier           #+#    #+#             */
/*   Updated: 2023/05/10 13:55:09 by tgibier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				moves;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

int		main(int argc, char **argv);

int		ft_verif_unique(t_list *params);
int		ft_check_params(char *param);
int		ft_magic(t_list **params, char *content);
void	ft_clear(t_list **save, int error);
void	indexing(t_list **pile_a);

void	ft_push_swap(t_list *pile_a);
void	ft_small_list(t_list **pile_a, t_list **pile_b, int size);
void	ft_part_stuff(t_list **pile_a, t_list **pile_b);
void	ft_fill_a(t_list **pile_a, t_list **pile_b);

void	check_next_and_last(t_list **pile_a, t_list **pile_b);
int		find_around(t_list **pile, int value);

int		ft_find_median(t_list **pile);
int		rank_of_lowest(t_list *pile_a);
int		ft_is_in_order_a(t_list **pile_a);
int		ft_is_lowest(t_list **pile, int current);
int		ft_is_highest(t_list **pile, int current);

void	ft_swap(t_list **pile, int boool);
void	ft_rotate(t_list **pile, int boool);
void	ft_rev_rotate(t_list **pile, int boool);
void	ft_push(t_list **pile_from, t_list **pile_to, int boool);
void	ft_both(t_list **pile_a, t_list **pile_b, int boool);

char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif