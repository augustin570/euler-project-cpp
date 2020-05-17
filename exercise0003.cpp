#include <iostream>
#include <cmath>

bool isPrime(long int number) {
  long int limit{static_cast<long int>(std::sqrt(number))};
  for (long int i{2}; i <= limit; ++i) {
    if (number % i == 0)
      return false;
  }
  return true;
}

int main() {
  long int answer{0}, number{600851475143}, limit{static_cast<long int>(std::sqrt(number))};

  for (long int i{limit}; limit > 1; --i) {
    if (number % i == 0 && isPrime(i)) {
      answer = i;
      break;
    }
  }

  std::cout << "Answer: " << answer << std::endl;

  return 0;
}