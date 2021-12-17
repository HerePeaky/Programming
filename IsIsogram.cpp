bool is_isogram(std::string str) {
  for (int k1 = 0; k1 < str.length(); ++k1) {
    for (int k2 = k1 + 1 ; k2 < str.length(); ++k2){
      if (std::tolower(str[k1]) == std::tolower(str[k2])) {
        return false;
      } 
    }
  }
return true;
}
