#include "../../inc/struct.h"
#include "../../inc/utils.h"

t_bool  hit_sphere(t_sphere *sp, t_ray *ray)
{
    t_vec3 oc;
    double a;
    double b;
    double c;
    double discrminant;

    oc = vminus(ray->orig, sp->center);
    a = vdot(ray->dir, ray->dir);
    b = 2.0 * vdot(oc, ray->dir);
    c = vdot(oc, oc) - sp->radius2;

    discrminant = b * b - 4 * a * c;

    return (discrminant > 0);
}