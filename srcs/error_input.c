#include "ft_traceroute.h"

static void		msg_noarg(char *name, char *input)
{
	printf("Usage: %s [%s] host\n", name, input);
}

static void		msg_badhost(char *name, char *input)
{
	printf("%s: unknown host %s\n", name, input);
}

static void		msg_other(char *name, char *input)
{
	printf("%s: Error %s\n", name, input);
}

int				error_input(char *name, char *input, int err)
{
	static void		(*error_msg[NB_ERR])(char *name, char *input) = {&msg_noarg, &msg_badhost, &msg_other};

	error_msg[err](name, input);
	return (1);
}
