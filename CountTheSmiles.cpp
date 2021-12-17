bool CheckSmile(std::string smile){
  if (smile[0] != ';' and smile[0] != ':'){
    return false;
  }
  if (smile.length() == 2){
    if(smile[1] != ')' and smile[1] != 'D'){
      return false;
    }
    return true;
  } else {
    if (smile[1] != '-' and smile[1] != '~'){
      return false;
    }
    if (smile[2] != ')' and smile[2] != 'D'){
      return false;
    }
    return true;
  }
}
int countSmileys(std::vector<std::string> arr)
{
  int count = 0;
  for(int i = 0; i < (int)arr.size(); ++i){
    if(CheckSmile(arr[i])){
      count++;
    }
  }
  return count;
}
