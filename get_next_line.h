/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:53:47 by mtrullar          #+#    #+#             */
/*   Updated: 2024/06/10 16:26:54 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	char			content;
	struct s_list	*next;
}					t_list;

int		ft_line_in_lst(t_list **node, t_list **to_del);

void	ft_lst_add_back(t_list *new_node, t_list **current_node);

t_list	*ft_new_node(char buffer);

char	*ft_lst_to_buffer(t_list **node, t_list **to_del);

void	ft_del_lst(t_list **node, t_list **to_del);

char	*get_next_line(int fd);

void	buffer_to_lst(t_list **node, char *buffer);

t_list	*ft_lst_last(t_list *node);

#endif