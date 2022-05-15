/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 15:55:14 by pniezen       #+#    #+#                 */
/*   Updated: 2021/12/02 15:10:50 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line_bonus(int fd);
char	*free_null(char *str);
void	*ft_calloc(size_t count, size_t size);
int		check_new_line(char *storage);
char	*realloc_and_join(char *storage, char *buff);
size_t	ft_strlen(const char *s);

#endif
