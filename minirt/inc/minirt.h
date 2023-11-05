#ifndef MINIRT_H
#define MINIRT_H

#include <unistd.h>
#include <stdlib.h>

#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
# include "../libft/libft.h"


typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_ambient
{
	char	id;
	double	ratio;
	int		r;
	int		g;
	int		b;
} t_ambient;

typedef struct s_camera
{
	char	id;
	double	ratio;
	int		r;
	int		g;
	int		b;
} t_camera;


typedef struct s_list
{
	t_ambient	ambient;
	t_camera	camera;
} t_list;



void	err_msg(char *msg);

size_t	ft_strlen(const	char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);



#endif  