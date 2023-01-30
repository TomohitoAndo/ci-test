#include <iostream>

int main()
{
  std::vector<int> num{1, 2, 3};
  for (const auto n : num)
  {
    std::cout << "hello: " << num << std::endl;
  }

  return 0;
}
