#include <iostream>
#include "HeaderOnlyLibTest/core.h"

int main() {
  std::cout << "<<<" << global_constant << ">>>" << std::endl;
  return 0;
}
