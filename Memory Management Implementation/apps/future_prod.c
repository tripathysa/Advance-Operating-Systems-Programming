#include <prodcons.h>

syscall future_prod(future *fut, int num) {
  int i, j;
  int status;

  j = (int)fut;
  for (i=0; i<1000; i++) {
    j += i;
  }
  status = future_set(fut, &j);
  return status;
}

