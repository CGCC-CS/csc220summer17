#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h> 

/* gcc pthread.c -lpthread */

#define NUM_THREADS 6

void *count_to_ten(void *x) {
    int ii, jj;
    char buffer[100];
    char tabs[20] = {'\0'};
    int skip = *((int *) x);
    for(jj=0;jj<skip;jj++) {
        sprintf(tabs, "%s\t",tabs);
    }
    for (ii=0;ii<10;ii++) {
        sprintf(buffer, "%s%d\n",tabs,ii);
        printf("%s", buffer);
        fflush(stdout);
        sleep(1);
    }
    return NULL;
}

int main() {
  int ii;
  int rc;

  pthread_t new_thread[NUM_THREADS];

  for (ii=0;ii<NUM_THREADS;ii++) {
    int num = ii;
    if (rc = pthread_create(&new_thread[ii], NULL, count_to_ten, &num)) {
      fprintf(stderr, "ERROR code %d calling pthread_create\n",rc);
      return 1;
    }
    sleep(1);
  }

  for (ii=0;ii<5;ii++) {
      fflush(stdout);
      sleep(1);
  }

  for (ii=0;ii<NUM_THREADS;ii++) {
    if (pthread_join(new_thread[ii], NULL)) {
      fprintf(stderr, "Error joining pthread\n");
      return 1;
    }
  }

  return(0);
}
