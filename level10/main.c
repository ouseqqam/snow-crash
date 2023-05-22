
int main(int ac, char **av) {
	if (ac < 2) {
		printf("%s file host\n\tsends file to host if you have access to it\n");
		exit(1);
	}
	else {
		int acs = access(av[1], 4);
		if (acs == 0) {
			fflush();
		}
	}
}
