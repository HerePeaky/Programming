#include <string>
using namespace std;
  int count_sum(int input_num) {
    int sum = 0;
    for (int i = 1; i * i < input_num + 1; i++) {
        if (input_num % i == 0) {
            sum += i;

        if (input_num / i != i) {
            sum += input_num / i;
            }
        }
    }
    return sum - input_num;
}
namespace Bud{
  
    string buddy(long long start, long long limit)
    {
    bool flag = true;
    int number1 = 0;
    int number2 = 0;
    int curr_num;
    for (int i = start; i < limit; i++){
        number1 = i;
        if (!flag) {
            break;
        }
        curr_num = count_sum(i);
        for (int t = i + 1; t < curr_num; t++){
            number2 = t;
            if (curr_num - 1 == t and count_sum(t) - 1 == i) {
                flag = false;
                break;
            }
        }
    }
    if (number1 != (limit - 1)) {
      std::string newstr = "(" + std::to_string(number1 - 1) + " " + std::to_string(number2) + ")";
        return newstr;
    }
    else {
        return "Nothing";
    }
    }
}
