#include <iostream>
#include <cmath>

int main() {
  int n {20}, primes[] {2, 3, 5, 7, 11, 13, 17, 19};
  unsigned long int answer {1};

  for (auto prime : primes) {
    answer *= static_cast<unsigned long int>(
      std::pow(prime, std::floor(std::log(n) / std::log(prime)))
    );
  }

  std::cout << "Answer: " << answer << std::endl;

  return 0;
}