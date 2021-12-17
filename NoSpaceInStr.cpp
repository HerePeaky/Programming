std::string no_space(std::string x)
{
    int count = 0; 
    std::string k;
  for (int i = 0; x[i]; i++){
        if (x[i] != ' ')
            k = k + x[i];
    }
  
    return k;
}
