#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include "sp.h"

int main(int argc, char** argv) {
  sem_t* sem;
  int ret;
  int sval;
  ret = sem_unlink(SEMAPHORE_NAME);
  return ret;
}
