static long findMissing(std::vector<long> list){
long element = (list[list.size() - 1] - list[0]) / long(list.size());
  for(int i = 0; i < list.size()  -1; ++i){
    if (list[i+1] - list[i] != element){
      return list[i] + element;
    }
  }
}
