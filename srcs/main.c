#include "ft_traceroute.h"

int			main(int argc, char **argv)
{
	t_info		data;

	if (argc == 1)
	{
		printf("Usage: ./ft_traceroute [] host\n");
		return (0);
	}
	parser(argc, argv, &data);
	if (optind >= argc)
		return (0);
	data.host = argv[optind];
	return (0);
}
