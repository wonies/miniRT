#include "../../inc/minirt.h"


t_bool	validate_rt(char *f_exten)
{
	int	len;

	len = ft_strlen(f_exten);
	if (ft_strlen(f_exten) < 3 || ft_strncmp(&f_exten[len - 3], ".rt", 3))
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2 || !(validate_rt(av[1])))
		err_msg("It must be WRONG😑... Maybe Check file Extension\n");
	return (0);
}
