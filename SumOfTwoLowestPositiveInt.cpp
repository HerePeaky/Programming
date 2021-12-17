#include <vector>
long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  for(int i = 0; i < (int)(numbers.size() - 1); ++i){
     for(int i = 0; i < (int)(numbers.size() - 1); ++i){
    if (numbers[i] > numbers[i + 1]) {
      std::swap(numbers[i], numbers[i + 1]);
    } 
    }
  }
  return (long int)(numbers[0]) + (long int)(numbers[1]);
  }
