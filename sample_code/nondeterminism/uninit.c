#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void send_data(unsigned char *data, int len) {
  for (int i=0; i < len; i++) {
    printf("%2x ", data[i]);
  }
  printf("\n");
}

void foo() {
  double *p = (double *) &p;
  printf("p = %p\n", p);
}

unsigned char* bar() {
  unsigned char data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  return data;
}

int main() {
  unsigned char *data = bar();
  foo();
  send_data(data, 8);
  return 0;
}
