#include <iostream>

int main() {
  unsigned int n {100},
    sum {n * (n + 1) / 2},
    sumOfSquares {n * (n + 1) * (2 *n + 1) / 6};

  std::cout << "Answer: " << (sum * sum - sumOfSquares) << std::endl;

  return 0;
}