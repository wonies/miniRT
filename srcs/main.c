#include "../inc/scene.h"
#include "../inc/print.h"
#include "../inc/struct.h"
#include "../inc/trace.h"
#include "../inc/utils.h"

int main(void)
{
    int         i;
    int         j;
    /* * * * 추가 * * * */
    double      u;
    double      v;
    /* * * * 추가 끝 * * * */

    t_color3    pixel_color;
    /* * * * 수정 * * * */
    t_canvas    canv;
    t_camera    cam;
    t_ray       ray;

    //Scene setting;
    canv = canvas(400, 300);
    cam = camera(&canv, point3(0, 0, 0));
    /* * * * 수정 끝 * * * */

    // 랜더링
    // P3 는 색상값이 아스키코드라는 뜻, 그리고 다음 줄은 캔버스의 가로, 세로 픽셀 수, 마지막은 사용할 색상값
    /* * * * 수정 * * * */
    printf("P3\n%d %d\n255\n", canv.width, canv.height);
    j = canv.height - 1;
    /* * * * 수정 끝 * * * */
    while (j >= 0)
    {
        i = 0;
        /* * * * 수정 * * * */
        while (i < canv.width)
        {
            u = (double)i / (canv.width - 1);
            v = (double)j / (canv.height - 1);
            //ray from camera origin to pixel
            ray = ray_primary(&cam, u, v);
            pixel_color = ray_color(&ray);
        /* * * * 수정 끝 * * * */
            write_color(pixel_color);
            ++i;
        }
        --j;
    }
}