#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main(int ac, char **av) {
	int fd = open(av[1],  O_RDONLY);
	char buff[1024];

	int i = read(fd, buff, 1024);
	buff[i] = '\0';
	printf("%s", buff);
	i = 0;
	char *str = malloc(sizeof(char) * i + 1);
	while (buff[i] != '\0') {
		str[i] = buff[i] - i;
		i++;
	}
	str[i] = '\0';
	printf("\n%s\n", str);
}