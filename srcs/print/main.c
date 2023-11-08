#include "../../inc/struct.h"
#include "../../inc/utils.h"
#include "../../inc/print.h"

int main(void)
{
    int     i;
    int     j;
    int     canvas_width;
    int     canvas_height;
    t_color3 pixel_color;

    canvas_width = 256;
    canvas_height = 256;

    while (i < canvas_width)
    {
        pixel_color.x = (double)i / (canvas_width - 1);
        pixel_color.y = (double)j / (canvas_height - 1);
        pixel_color.z =  0.25;
        write_color(pixel_color);
    ++i;
    }
}