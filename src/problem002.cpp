#include <cstdint>
#include <iostream>

int main() {
  uint64_t sum = 0;
  uint64_t a = 1;
  uint64_t b = 2;

  while (b < 4000000) {
    if (b % 2 == 0) {
      sum += b;
    }

    uint64_t temp = a + b;
    a = b;
    b = temp;
  }

  std::cout << sum << std::endl;
  return 0;
}