//Christopher Bartz
//cyb01b
//CS4760 S02
//Project 1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *scat(char *s, char *t);

int main(int argc, char *argv[]) {
	pid_t childpid = 0;
	int i, n, opt;

	//check for valid number of command-line arguments
	if (argc < 2) {
		char errorMessage[] = "Usage: ";
		char errorMessage2[] = " <processes>\n";
		strcat(errorMessage, argv[0]);
		strcat(errorMessage, errorMessage2);
		perror(errorMessage);
		return 1;
	}

	//gather option flags
	while ((opt = getopt(argc, argv, "abc:")) != -1){
			switch (opt) {
			case 'a':
	//			aflag = 1;
				printf("opt a detected\n");
				break;
			case 'b':
	//			bflag = 1;
				break;
			case 'c':
	//			cvalue = optarg;
				break;
			default:
				break;
//				char em1[] = "Unable to recognize option: ";
//				char em2[] = " Exiting.\n";
//				char optchar[3];
//				optchar[0] = '-';
//				optchar[1] = (char) opt;
//				optchar[2] = '\0';
//				strcat(em1, optchar);
//				strcat(em1, em2);
//				perror(em1);
			}
	}

	n = atoi(argv[1]);
	for (i = 1; i < n; i++)
		if (childpid = fork())
			break;

	fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n", i,
			(long) getpid(), (long) getppid(), (long) childpid);
	return 0;
}
