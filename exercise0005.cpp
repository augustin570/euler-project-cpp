#include <iostream>

bool isDivisibleByAll(int number, int n) {
  for (int i{2}; i <= n; ++i)
    if (number % i != 0)
      return false;

  return true;
}

int main() {
  int n{20}, answer{n + 1};

  while (!isDivisibleByAll(answer, n))
    ++answer;

  std::cout << "Answer: " << answer << std::endl;

  return 0;
}