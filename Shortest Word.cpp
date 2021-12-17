#include <string>
int find_short(std::string str)
{
  str += ' ';
  int cmin = str.length();
  int count = 0;
  for(int i = 0; i < (int)str.length(); ++i){
    if ( str[i] != ' '){
      ++count;
    } else if (str[i] == ' '){
      if (cmin > count)
        cmin = count;
      count = 0;
    }
  }
  return cmin;
}
