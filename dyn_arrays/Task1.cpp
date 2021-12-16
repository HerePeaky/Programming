#include<iostream>

int main() {
    int n, m;
    std::cout << "Enter size of massive nxm:  ";
    std::cin >> n >> m;
    int** x = new int*[n];
    for (int i = 0; i < n; ++i) {
        x[i] = new int[m];
    }
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                ++k;
                x[i][j] = k;
            }
        }
        else {
            for (int j = m-1; j >= 0; --j) {
                ++k;
                x[i][j] = k;
            }
        }       
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << x[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < n; ++i) {
        delete[] x[i];
    }
    delete[] x;
}
