/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:48:54 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/07 16:16:57 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	i = 0;
	a = c;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return (&((char*)s)[i]);
		i++;
	}
	if (c == 0)
		return ((char*)s + i);
	return (0);
}