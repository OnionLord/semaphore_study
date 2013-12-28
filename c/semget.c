#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include "sp.h"

int main(int argc, char** argv) {
  sem_t* sem;
  int ret;
  int sval;
  sem = sem_open(SEMAPHORE_NAME, 0);
  if (sem == SEM_FAILED) {
    perror("sem_open");
    return -1;
  }
  ret = sem_getvalue(sem, &sval);
  printf("sval=%d\n", sval);
  return 0;
}
