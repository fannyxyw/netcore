#include <iostream>

void test() {
  std::cout << "do nothing" << std::endl;
}

void add() {
  std::cout << "process add function" << std::endl;
}

int main() {
  std::cout << "hello gerrit" << std::endl;
  test();
  add();
  return 0;
}
