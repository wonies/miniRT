#include "../../inc/minirt.h"

void	err_msg(char *msg)
{
	perror(msg);
	exit(2);
}
