#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>a

int	main(int ac, char **av)
{
	int	fd;
	char *line;

	printf("%d : %s\n", get_next_line(fd, &line), line);
	printf("%d : %s\n", get_next_line(fd, &line), line);
	
	return (0);
}
