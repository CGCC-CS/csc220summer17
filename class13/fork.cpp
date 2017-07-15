// Same as fork.c, just converted to C++

#include<iostream>
#include<unistd.h>
#include<sys/wait.h>

int main() {

  int pid;
  pid_t childwait;
  int n = 0;
  int ii;
  char c = 'X';

  std::cout << "[" << c << "]:Before fork: n = " << n << std::endl;
  sleep(2);

  pid = fork();
  /* child */
  if(pid == 0) {
    n = 1;
    c = 'C';
    std::cout << "Child process.  n=" << n << ", returned PID=" << pid << std::endl;
    for(ii=0;ii<10;ii++) {
        std::cout << "\t\t\t\t\t\t\tC" << ii << std::endl;
        sleep(1);
    }
    sleep(5);
    std::cout << "Child process complete." << std::endl;
  }

  /* parent */
  else {
    c = 'P';
    sleep(2);
    std::cout << "Parent process.  n=" << n << ", returned PID=" << pid << std::endl;
    for(ii=0;ii<10;ii++) {
        std::cout << "\t\t\t\t\t\tp" << ii << std::endl;
        sleep(1);
    }
    wait(&childwait);
    std::cout << "Parent process: child complete." << std::endl;
  } 

  std::cout << "[" << c << "]:After fork: n = " << n << std::endl;
  exit(0);
}
