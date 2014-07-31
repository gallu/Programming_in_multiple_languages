#include <iostream>

int hoge(int i) {
  return i * 2;
}

int main() {
  int i;
  i = hoge(10);
  std::cout << "return is " << i << std::endl;

  return 0;
}

