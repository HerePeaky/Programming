#include<iostream>

int* shiftArray(int* M, int n, int k) {
    int* F = new int[n];
    if(k > n)
        k %= n;
    for (size_t i = 0; i < n; ++i) {
        if (i < k) {
            F[n - k + i] = M[i];
        }
        else {
            F[i - k] = M[i];
        }
    }
    return F;
}

int main() {
    int n, step;
    std::cin >> n >> step;
    int* x = new int[n];
    for (size_t i = 0; i < n; ++i) {
        std::cin >> x[i];
    }
    int* answer = shiftArray(x, n, step);
    for (int i = 0; i < n; ++i) {
        std::cout << answer[i] << " ";
    }
    delete[] x;
    delete[] answer;
}
