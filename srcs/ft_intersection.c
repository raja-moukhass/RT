/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intersection.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramoukha <ramoukha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 15:25:01 by ramoukha          #+#    #+#             */
/*   Updated: 2021/03/02 17:54:27 by ramoukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

double	cone_intersection(t_ray *ray, t_obj *cone)
{
	t_sol	n;
	t_vec	obj_center;
	double	discr;

	n.k = tan((cone->an_ra * M_PI / 180.0));
	obj_center = vec_sub(ray->o, cone->pos);
	n.a = dot_product(ray->dir, ray->dir) - (1 + pow(n.k, 2)) *
	(dot_product(ray->dir, cone->axis) * dot_product(ray->dir, cone->axis));
	n.b = 2 * (dot_product(ray->dir, obj_center) - (1 + pow(n.k, 2))
	* (dot_product(ray->dir, cone->axis) *
	dot_product(obj_center, cone->axis)));
	n.c = (dot_product(obj_center, obj_center) - (1 + pow(n.k, 2))
	* (dot_product(obj_center, cone->axis)
	* dot_product(obj_center, cone->axis)));
	discr = n.b * n.b - 4 * n.a * n.c;
	if (discr < 0)
		return (-1);
	else
	{
		n.t1 = (-n.b - sqrt(discr)) / (2 * n.a);
		n.t2 = (-n.b + sqrt(discr)) / (2 * n.a);
	}
	return (ft_min_ray(n.t1, n.t2, n.t));
}

double	intersect_plane(t_ray *r, t_obj *plane)
{
	double	res;
	double	s1;
	double	denom;
	t_vec	nomin;

	res = dot_product(r->dir, plane->axis);
	if (res == 0)
		return (0);
	nomin = vec_sub(r->o, plane->pos);
	denom = dot_product(nomin, plane->axis);
	s1 = -(denom) / (res);
	if (s1 < 0)
		return (0);
	return (s1);
}

double	intersection_cylinder(t_ray *ray, t_obj *cylinder)
{
	t_sol	n;
	t_vec	x;
	double	delta;

	x = vec_sub(ray->o, cylinder->pos);
	n.tmp = dot_product(ray->dir, cylinder->axis);
	n.tmp_2 = dot_product(x, cylinder->axis);
	n.tmp1 = dot_product(x, ray->dir);
	n.a = dot_product(ray->dir, ray->dir)
	- pow(dot_product(ray->dir, cylinder->axis), 2);
	n.b = 2 * (n.tmp1 - n.tmp * n.tmp_2);
	n.c = dot_product(x, x) - pow(n.tmp_2, 2)
	- (cylinder->an_ra * cylinder->an_ra);
	delta = n.b * n.b - (4 * n.a * n.c);
	if (delta < 0)
		return (0);
	n.t1 = (-n.b - sqrt(delta)) / (2 * n.a);
	n.t2 = (-n.b + sqrt(delta)) / (2 * n.a);
	return (ft_min_ray(n.t1, n.t2, n.t));
}

double	intersection_spher(t_ray *r, t_obj *s)
{
	t_sol n;
	t_vec dist;

	dist = vec_sub(r->o, s->pos);
	n.a = get_norm(r->dir);
	n.b = 2 * dot_product(r->dir, dist);
	n.c = get_norm(dist) - (s->an_ra * s->an_ra);
	n.delta = n.b * n.b - 4 * n.a * n.c;
	if (n.delta < 0)
		return (-1);
	n.t1 = (-1 * n.b - sqrt(n.delta)) / (2 * n.a);
	n.t2 = (-1 * n.b + sqrt(n.delta)) / (2 * n.a);
	return (ft_min_ray(n.t1, n.t2, n.t));
}
