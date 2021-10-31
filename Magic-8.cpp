#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL: \n";
  srand(time(NULL));
  int A = std::rand() % 10;
  std::cout << A << "\n";
  
  if (A == 0) {
    std::cout << "It is certain. \n";
  }
  else if (A == 1) {
    std::cout << "It is decidedly so. \n";
  }
  else if (A == 2) {
    std::cout << "Without a doubt. \n";
  }
  else if (A == 3) {
    std::cout << "Yes - definitely. \n";
  }
  else if (A == 4) {
    std::cout << "You may rely on it. \n";
  }
  else if (A == 5) {
    std::cout << "As I see it, yes. \n";
  }
  else if (A == 6) {
    std::cout << "Most likely. \n";
  }
  else if (A == 7) {
    std::cout << "Outlook good. \n";
  }
  else if (A == 8) {
    std::cout << "Yes. \n";
  }
  else {
    std::cout << "Very doubtful. \n";
  }
  return 0;
}