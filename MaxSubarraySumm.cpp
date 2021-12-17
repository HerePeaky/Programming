#include <vector>
int maxSequence(const std::vector<int>& arr){
    int currsumma = 0, maxsumm = 0;
    for (int s = 0; s < arr.size(); s++) {
        for (int i = 0; i < arr.size(); i++)
        {
            currsumma = 0;
            for (int k = s; k <= i; k++)
            {
                currsumma += arr[k];
            }
            maxsumm = std::max(maxsumm, currsumma);
        }
    }
  return maxsumm;
}
