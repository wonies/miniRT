#include "../../inc/minirt.h"

t_bool init(char **av)
{
	int	fd;

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		err_msg("Descripor ERR\n");
	
}