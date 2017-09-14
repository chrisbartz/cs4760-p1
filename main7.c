//Christopher Bartz
//cyb01b
//CS4760 S02
//Project 1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define DEBUG 0

int printHelp(char *argv[], int x);

int main(int argc, char *argv[]) {
	pid_t childpid = 0;
	int i, n, opt, status;
	int m = 1, k = 1;

	//check for valid number of command-line arguments
	if (argc < 2) {
		return printHelp(argv, 1);
	}
	if (DEBUG) printf("past args check\n");

	//gather option flags
	while ((opt = getopt(argc, argv, "n:k:m:h")) != -1){
			switch (opt) {
			case 'n':
				n = atoi(optarg);
				if (DEBUG) printf("opt n detected: %d\n", n);
				break;
			case 'k':
				k = atoi(optarg);
				if (DEBUG) printf("opt k detected: %d\n", k);
				break;
			case 'm':
				m = atoi(optarg);
				if (DEBUG) printf("opt m detected: %d\n", m);
				break;
			case 'h':
				if (DEBUG) printf("opt h detected\n");
				return printHelp(argv, 0);
				break;
			default:
				break;
			}
	}
	if (DEBUG) printf("past checkopt\n");
	if (DEBUG) printf("m: %d\n",m);
	if (DEBUG) printf("k: %d\n",k);
	if (DEBUG) printf("n: %d\n",n);

//	n = atoi(argv[1]);
	for (i = 1; i < n; i++)
		if (childpid = fork())
			break;
	//sleep(10); //question 4

	for (int j = 0; j < k; j++) {
//	wait(&status);
	fprintf(stderr, "i:%d ", i);
	fprintf(stderr, "process ID:%ld ", (long) getpid());
	fprintf(stderr, "parent ID:%ld ", (long) getppid());
	fprintf(stderr, "child ID:%ld\n", (long) childpid);
//		sleep(m);
	}

	return 0;
}

int printHelp(char *argv[], int x) {
	char errorMessage[] = "Usage: ";
	char errorMessage2[] = " <processes>\n";
	strcat(errorMessage, argv[0]);
	strcat(errorMessage, errorMessage2);

	if (x)
		perror(errorMessage);
	else
		printf("%s",errorMessage);

	return x;
}
