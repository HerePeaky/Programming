std::string get_middle(std::string ss) 
{
   std::string k = "";
  if (ss.length() % 2 == 0){
    k += ss[int(ss.length() / 2 - 1)];
    k += ss[int(ss.length() / 2)];
  } else 
    k += ss[int(ss.length() / 2)];
  return k;
}
