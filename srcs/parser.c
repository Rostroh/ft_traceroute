#include "ft_traceroute.h"

int			parser(int nb, char **args, t_info *data)
{
	char	opt;

	while ((opt = ft_getopt(nb, args, "")) != -1)
	{
		switch (opt)
		{
			default:
				return (-1);
		}
	}
	data->host = "tamales";
	return (0);
}
