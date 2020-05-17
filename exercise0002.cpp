#include <iostream>

int main() {
  int answer{0}, limit{4000000}, a{1}, b{1}, c{a + b};

  do {
    a = b;
    b = c;
    c = a + b;
    if (b % 2 == 0)
        answer += b;
  } while (c < limit);

  std::cout << "Answer: " << answer << std::endl;

  return 0;
}