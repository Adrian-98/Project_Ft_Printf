/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:03:48 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/27 17:14:23 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_bonus.h"

void		ft_print_n(char *src, va_list argptr, t_struct *f)
{
	int *s;

	s = va_arg(argptr, int *);
	s = ft_substr(src, 0, f->i);
}
