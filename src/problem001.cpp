#include <iostream>

int main() {
  int sum = 0;

  for (int i = 3; i < 1'000; i += 3) {
    if (i % 5 != 0) {
      sum += i;
    }
  }
  for (int i = 5; i < 1'000; i += 5) {
    sum += i;
  }

  std::cout << "Sum: " << sum << std::endl;

  return 0;
}