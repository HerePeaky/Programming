#include <iostream>
#include <cmath>
int main() {
    double x;
    int n;
    std::cin >> x;
    std::cin >> n;
    double s = 0;
    double s1 = sin(x);
    for(int i = 1; i <= n; ++i) {
        s += s1;
        s1 = sin(s1);
    }
    std::cout << s << std::endl;
    return 0;
}