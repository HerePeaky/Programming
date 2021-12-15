std::string pig_it(std::string str)
{
    std::string res = "";
    int eindex = 0;
    int sindex = 0;
    int counter = 0;
    if (str.length() == 1)
      return str;
    for(int i = 0; i < (int)str.length() + 1; ++i){
      ++eindex;
      ++counter;
      if((str[i] == '!' or str[i] == '?' or str[i] == '.' or str[i] == ',')){
        res += str[i];
        } else if(str[i] == ' ' and (str[i+1] >=65 or str[i+1] <=122 )){
        for(int k = sindex + 1; k < eindex - 1; ++k){
          res += str[k];
        }
        sindex = eindex;
        if(str[i-1] >= 65 and str[i-1] <= 122){
          res += str[eindex - counter];
          res += "ay ";
          }
        counter = 0;
      } else if(str[i] == ' ' and (str[i+1] < 65 or str[i+1] > 122)){
        res += str[i];
      }
      if(str[i] == str[str.length() ]){
        for(int k = sindex + 1; k < eindex - 1; ++k){
          res += str[k];
        }
        sindex = eindex;
        if(str[i-1] >= 65 and str[i-1] <= 122){
          res += str[eindex - counter];
          res += "ay";
          }
        counter = 0;
      }
      
    }
  std::string answer;
  for(int l = 0; l <= (int)res.length() - 1; ++l){
  if(res[l] < 65 and res[l + 1] == ' ' )
    answer += res[l];
    else if (res[l] < 65 and res[l + 1] > 65 and res[l] != ' '){
    answer += res[l];
    answer += ' ';
    } else if (res[l] < 65 and res[l + 1] < 65 and res[l] != ' ' and res[l + 1] != res[res.length()]){
    answer += res[l];
    answer += " ";
    }else if(res[l] == res[res.length()]){
    answer += res[l];
  } else answer += res[l];
    }
        
  return answer;
}
