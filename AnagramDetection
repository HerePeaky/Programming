#include <string>

bool isAnagram(std::string test, std::string original){
  if(test.length() != original.length()){
    return false;
  }
  int first[26];
  int second[26];
  for (int i = 0; i < 26; ++i){
    first[i] = 0;
    second[i] = 0;
  }
  char a, b;
  for(int i = 0; i < test.length(); ++i){
    a = std::tolower(test[i]);
    b = std::tolower(original[i]);
    
    first[int(a) - 'a'] += 1;
    second[int(b) - 'a'] += 1;
    //Идёт проверка на количество вхождений определённых символов в обоих строчках
    
  }
  for(int i = 0; i < 26; ++i){
    if(first[i] != second[i]){
      return false;
    //Проверка кол-ва вхождение, если не совпадает хоть 1 символ - дропаем на false
    }
  }
  return true;
}
