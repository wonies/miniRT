#ifndef SCENE_H
#define SCENE_H

#include "struct.h"
#include "utils.h"

t_canvas    canvas(int width, int height);
t_camera    cameta(t_canvas *canvas, t_point3 origin);

#endif