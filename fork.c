#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() {

  int pid;
  pid_t childwait;
  int n = 0;
  int ii;
  char c = 'X';

  printf("[%c]:Before fork: n = %d\n", c, n);
  sleep(2);

  pid = fork();
  /* child */
  if(pid == 0) {
    n = 1;
    c = 'C';
    printf("Child process.  n=%d, returned PID=%d\n", n, pid);
    for(ii=0;ii<10;ii++) {
        printf("\t\t\t\t\t\t\tC%d\n",ii);
        sleep(1);
    }
    sleep(5);
    printf("Child process complete.\n");
  }

  /* parent */
  else {
    c = 'P';
    sleep(2);
    printf("Parent process.  n=%d, child PID=%d\n", n, pid);
    for(ii=0;ii<10;ii++) {
        printf("\t\t\t\t\t\tp%d\n",ii);
        sleep(1);
    }
    wait(&childwait);
    printf("Parent process: child complete\n");
  } 

  printf("[%c]:After fork: n = %d\n", c, n);
  exit(0);
}
