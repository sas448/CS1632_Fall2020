#include <stdio.h>
#include <pthread.h>
int Global = 0;
void *Thread1(void *x) {
  for(int i=0; i < 1000000; i++) {
      Global++;
  }
  return x;
}
int main() {
  pthread_t t;
  pthread_create(&t, NULL, Thread1, NULL);
  for(int i=0; i < 1000000; i++) {
    Global++;
  }
  pthread_join(t, NULL);
  printf("global=%d\n", Global);
  return Global;
}
