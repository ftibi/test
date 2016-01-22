#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	char *line;
    int ret = 1;
	ac = 0;
	fd = open(av[1], O_RDONLY);
	
	while (ret)
	{
	    ret = get_next_line(fd, &line);
	    printf("%d : %s\n", ret, line);
	}
	return (0);
}
