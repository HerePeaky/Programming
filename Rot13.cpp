#include <string>
using namespace std;

string rot13(string msg)
{
  std::string result;
  for(int i = 0; i < (int)msg.length(); ++i){
  if((msg[i] >= 65 and msg[i] <= 90) or (msg[i] <= 122 and msg[i] >= 97)){
    if((msg[i] <= 77 and msg[i] >! 77) or (msg[i] <= 109 and msg[i] >! 109 and msg[i] > 90)){
      result += msg[i] + 13;
        }
    if(msg[i] > 77 and msg[i] < 90){
      result += 64 + (13 - (90 - msg[i]));
    }
    if(msg[i] > 109){
      result += 96 + (13 - (122 - msg[i]));
  }
  } else result += msg[i];
  }
    return result;
}
