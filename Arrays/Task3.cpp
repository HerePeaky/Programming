#include<iostream>

int main() {
    int N;
    char RVON[1000];
    int k = 0;
    std::cout << "Enter the number in decimal system = ";
    std::cin >> N;
    while (N != 0) {
        k = k + 1;
        if ((N % 16) < 10) {
            RVON[k] = '0' + N % 16;
        }
        else {
            RVON[k] = char((N % 16) + 55);
        }
        N = N / 16;
    }
    std::cout << "Hexadecimal number = ";
    for (int i = k; i >= 1; --i) {
        std::cout << RVON[i];
    }
    std::cout << "\n";
    std::string STR;
    std::cout << "Enter hexadecimal number = ";
    std::cin >> STR;
    int TNum = 0;
    for (int i = 0; i < STR.length(); ++i) {
        if (STR[i] >= 'A') {
            STR[i] = STR[i] - 55;
            TNum += int(STR[i]) * pow(16, STR.length() - (i + 1));
        }
        else {
            TNum += (STR[i] - '0') * pow(16, STR.length() - (i + 1));
        }
    }
    std::cout << "Number in decimal system = " << TNum;
}