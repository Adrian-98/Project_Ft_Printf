/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cats_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:44:28 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/12/10 17:58:26 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_bonus.h"

void		ft_cast(const char *src, t_struct *f)
{
	while (ft_strchr("lh", src[f->i]))
	{
		if (src[f->i] == 'l')
		{
			if (src[f->i + 1] == 'l')
			{
				f->ll = 1;
				f->i++;
			}
			else
				f->l = 1;
		}
		else if (src[f->i] == 'h')
		{
			if (src[f->i + 1] == 'h')
			{
				f->hh = 1;
				f->i++;
			}
			else
				f->h = 1;
		}
		f->i++;
	}
}
