/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils_bonus.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/20 11:21:18 by pniezen       #+#    #+#                 */
/*   Updated: 2021/12/07 16:48:59 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*free_null(char *str)
{
	free(str);
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*p;
	unsigned int	i;

	i = 0;
	ptr = malloc(count * size);
	p = ptr;
	if (ptr)
	{
		while (i < (count * size))
		{
			*p = '\0';
			p++;
			i++;
		}
	}
	return (ptr);
}

int	check_new_line(char *buffer)
{
	int		i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*realloc_and_join(char *dst, char *src)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = ft_calloc((ft_strlen(dst) + ft_strlen(src)) + 1, sizeof(char));
	if (!tmp)
		return (free_null(dst));
	while (dst[i])
	{
		tmp[i] = dst[i];
		i++;
	}
	while (src[j])
	{
		tmp[i] = src[j];
		i++;
		j++;
	}
	free(dst);
	return (tmp);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
