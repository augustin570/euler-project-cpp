#include <iostream>
#include <cmath>

bool isPrime(unsigned long int number) {
  auto limit {static_cast<unsigned long int>(std::sqrt(number))};

  for (auto i {2}; i <= limit; ++i)
    if (number % i == 0)
      return false;

  return true;
}

int main () {
  unsigned long int counter {1}, limit {10001}, iterator {1};

  while (counter < limit) {
    iterator += 2;
    if (isPrime(iterator)) {
      ++counter;
    }
  }

  std::cout << iterator << std::endl;

  return 0;
}