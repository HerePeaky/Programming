std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> k;
    if (n == 0) {
      return k;
    }
    if (n < 3) {
      for (int i = 0; i < n; ++i) {
        k.push_back(signature[i]);
      }
      return k;
    }
    k = signature;
    for (int i = 3; i < n; ++i) {
      k.push_back(k[i-3] + k[i-2] + k[i-1]);
    }
  return k;
}
