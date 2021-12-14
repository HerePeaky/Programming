#include<iostream>

int main() {
    int N;
    int A[1000];
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[A];
    }
    int r = A[2] - A[1];
    int check = 1;
    for (int i = 1; i < N; ++i) {
        if ((A[i + 1] - A[i]) != r) {
            check = 0;
            break;
        }
    }
    if (check == 1) {
        std::cout << r;
    }
    else {
        std::cout << 0;
    }
}