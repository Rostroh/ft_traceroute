#ifndef FT_TRACEROUTE_H
# define FT_TRACEROUTE_H

# include "../libft/include/libft.h"

# include <math.h>
# include <errno.h>
# include <sys/time.h>
# include <netdb.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <signal.h>
# include <arpa/inet.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <netinet/ip.h>
# include <netinet/ip_icmp.h>
# include <netinet/in_systm.h>

typedef struct	s_info {
	char		*host;
}				t_info;

# define NB_ERR 3
# define NO_ARG 0
# define B_HOST 1
# define OTHERS 2

int		ft_getopt(int argc, char **argv, const char *optstring);
int		parser(int nb, char **args, t_info *data);
int		error_input(char *name, char *input, int err);
#endif 
