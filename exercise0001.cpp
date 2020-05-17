#include <iostream>

int main() {
  int answer{0}, limit{1000};

  for (int i{1}; i <= limit; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      answer += i;
    }
  }

  std::cout << "Answer: " << answer << std::endl;

  return 0;
}