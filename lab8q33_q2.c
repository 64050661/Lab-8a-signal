// 64050661 Varit Tubtim
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdlib.h>
int main(void) {
	pid_t pid = fork();
	if (pid == 0) {
		printf("Child wait for SIGKILL \n");
		while(1) ;
		printf("Child has received SIGKILL \n");
		exit(0);
	} else {
		printf("parent is sending SIGKILL \n");
		kill(pid, SIGALRM);
		printf("sending Success\n");
		while(1) ;
	}
	return 0;	
}
