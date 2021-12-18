#include <string>
using namespace std ; 

string reverseString (string str )
{
  for(int i = 0; i < (int)str.length() / 2; ++ i){
    std::swap(str[i], str[str.length() - 1 - i]);
  }
  return str ;
}
