#include <stdio.h>

int hoge(int i) {
  return i * 2;
}

int main() {
  int i;
  i = hoge(10);
  printf("return is %d\n", i);
  return 0;
}

