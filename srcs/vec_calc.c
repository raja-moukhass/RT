/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramoukha <ramoukha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:24:56 by ramoukha          #+#    #+#             */
/*   Updated: 2021/02/27 14:23:08 by ramoukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

t_vec	vec_cross(t_vec v1, t_vec v2)
{
	t_vec c;

	c.x = v1.y * v2.z - v2.y * v1.z;
	c.y = v1.z * v2.x - v2.z * v1.x;
	c.z = v1.x * v2.y - v2.x * v1.y;
	return (c);
}

t_vec	vec_add(t_vec v1, t_vec v2)
{
	t_vec c;

	c.x = v1.x + v2.x;
	c.y = v1.y + v2.y;
	c.z = v1.z + v2.z;
	return (c);
}

t_vec	vec_sub(t_vec v1, t_vec v2)
{
	t_vec c;

	c.x = v1.x - v2.x;
	c.y = v1.y - v2.y;
	c.z = v1.z - v2.z;
	return (c);
}

t_vec	vec_product(t_vec v, double i)
{
	t_vec c;

	c.x = v.x * i;
	c.y = v.y * i;
	c.z = v.z * i;
	return (c);
}

double	dot_product(t_vec v1, t_vec v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}
