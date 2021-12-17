#include <string>
#include <cmath>

 int AF(int a, std::string b, int len)
{
    int mod = 0;
    for (int i = 0; i < len; i++)
        mod = (mod * 10 + b[i] - '0') % a;
    return mod; 
}

int last_digit(const std::string& str1, const std::string& str2){
    int la = str1.length();
    int lb = str2.length();
    int lenght = lb;
    if (la == 1 and lb == 1 and str2[0] == '0' and str1[0] == '0')
        return 1;

    if (lb == 1 && str2[0] == '0')
        return 1;

    if (la == 1 && str1[0] == '0')
        return 0;
    int exp = ( AF(4, str2, lenght) == 0) ? 4 : AF(4, str2, lenght);
    int res = pow(str1[la - 1] - '0', exp);
    return res % 10;
