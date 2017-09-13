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
	int m = 0, k = 1, c = 0, w = 0;

	//check for valid number of command-line arguments
	if (argc < 2) {
		return printHelp(argv, 1);
	}
	if (DEBUG) printf("past args check\n");

	//gather option flags
	while ((opt = getopt(argc, argv, "n:k:m:hwc:")) != -1){
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
			case 'c':
				c = atoi(optarg);
				if (DEBUG) printf("opt c detected: %d\n", c);
				break;
			case 'h':
				if (DEBUG) printf("opt h detected\n");
				return printHelp(argv, 0);
				break;
			case 'w':
				if (DEBUG) printf("opt w detected\n");
				w = 1;
				break;
			default:
				break;
			}
	}
	if (DEBUG) printf("past checkopt\n");
	if (DEBUG) printf("m: %d\n",m);
	if (DEBUG) printf("k: %d\n",k);
	if (DEBUG) printf("n: %d\n",n);
	if (DEBUG) printf("c: %d\n",c);
	if (DEBUG) printf("w: %d\n",w);

//	n = atoi(argv[1]);
	for (i = 1; i < n; i++)
		if (childpid = fork())
			break;
	//sleep(10); 				//question 4

	for (int j = 0; j < k; j++) { //question 5
		if (w) wait(&status);	//question 6
		if (c) {				//question 8
			//do something
			char mybuf[c + 1];
			fprintf(stderr, "Enter value for process i: %d", i);
			for (int l = 0; l < c; l++) {
				mybuf[c] = (char) getchar();
			}
			fprintf(stderr, "\n");
			mybuf[c] = '\0';
			fprintf(stderr, "i:%d : %s", i, mybuf);

		} else {
			fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n", i, (long)getpid(), (long)getppid(), (long)childpid);
		}

//	fprintf(stderr, "i:%d ", i);	//question 7
//	fprintf(stderr, "process ID:%ld ", (long) getpid());
//	fprintf(stderr, "parent ID:%ld ", (long) getppid());
//	fprintf(stderr, "child ID:%ld\n", (long) childpid);

		sleep(m);
	}

	return 0;
}

int printHelp(char *argv[], int x) {
	char errorMessage[] = "Usage: ";
	char errorMessage2[] = " <arguments>\n";
	char filename[strlen(argv[0]) + 1];
	strcpy(filename,argv[0]);
//	for (int i = 0; i < (int)strlen(filename); i++) {
//		printf("%c\n",filename[i]);
//	}

//	filename[(int)strlen(filename)] = '\n';
	strcat(errorMessage, filename);
	strcat(errorMessage, errorMessage2);

//	printf("TEST\n");
//	printf("%s",filename);
//	printf("%d",(int) strlen(argv[0]));
//	printf("%s",errorMessage);
//	printf("%s",errorMessage2);
//	printf("\nTEST\n");

	if (x)
//		perror(errorMessage);  /just couldnt make this work right
		fprintf(stderr,"Usage: ./my_prog <arguments>\n");
	else
//		printf("%s",errorMessage);
		fprintf(stdout,"Usage: ./my_prog <arguments>\nswitches: -h -n # -m # -k # -c # -w\n");

	return x;
}
