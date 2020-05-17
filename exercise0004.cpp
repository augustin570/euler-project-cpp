#include <iostream>
#include <cmath>

bool isPalindrome(int number) {
  int palindrome{0}, iterator{number};

  while (iterator > 0) {
    palindrome = palindrome * 10 + iterator % 10;
    iterator /= 10;
  }

  return palindrome == number;
}

int getPalindrome(int n) {
  int init{static_cast<int>(std::pow(10, n)) - 1},
    limit{static_cast<int>(std::pow(10, n - 1))},
    palindrome{-1};

  for (int i{init}; i >= limit; --i)
    for (int j{init}; j >= limit; --j)
      if (isPalindrome(i * j) && palindrome < i * j)
        palindrome = i * j;

  return palindrome;
}

int main() {
  int n{3};

  std::cout << "Answer: " << getPalindrome(n) << std::endl;

  return 0;
}