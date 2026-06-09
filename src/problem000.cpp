#include <cstdint>
#include <iostream>

int main() {
  int64_t sum = 0;

  for (int64_t i = 1; i < 501'001; i++) {
    int64_t j = i * i;
    if (j % 2 != 0) {
      sum += j;
    }
  }

  std::cout << "Sum: " << sum << std::endl;

  return 0;
}
