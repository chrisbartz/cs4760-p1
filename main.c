//Christopher Bartz
//cyb01b
//CS4760 S02
//Project 1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *scat(char *s,char *t);

int main (int argc, char *argv[]) {
   pid_t childpid = 0; 
   int i, n;
 
   if (argc != 2){   /* check for valid number of command-line arguments */
//      fprintf(stderr, "Usage: %s processes\n", argv[0]);
	   char *errorMessage = "Usage: ";
	   errorMessage = scat(errorMessage, argv[0]);
	   errorMessage = scat(errorMessage, " <processes>\n");
	   perror(errorMessage);
	   return 1;
   }

   n = atoi(argv[1]);  
   for (i = 1; i < n; i++)
      if (childpid = fork()) 
         break;
 
   fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n",
           i, (long)getpid(), (long)getppid(), (long)childpid);
   return 0; 
}

char *scat(char *s,char *t)
{
    char *p=malloc(strlen(s)+strlen(t)+1);
    int ptr =0, temp = 0;

    while(s[temp]!='\0'){
        p[ptr++] = s[temp++];
    }
    temp=0;
    while(t[temp]!='\0'){
        p[ptr++]=t[temp++];
    }
    return p;
}
