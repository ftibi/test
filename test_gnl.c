#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	char *line;

	ac = 0;
	fd = open(av[1], O_RDONLY);
	printf("%d : %s\n", get_next_line(fd, &line), line);
	printf("%d : %s\n", get_next_line(fd, &line), line);
	
	return (0);
}
