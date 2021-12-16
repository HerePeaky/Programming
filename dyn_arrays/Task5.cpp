#include<iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int** x = new int* [n];
    for (int i = 0; i < n; ++i) {
        x[i] = new int[m];
    }
    int ecol = m-1; int scol = 0; int srow = 0; 
    int erow = n - 1; int k = 0;
    while (k < (n * m + 1)) {
        for (int i = scol; i <= ecol; ++i) {
            ++k;
            if (k > (n * m)) {
                break;
            }
            x[srow][i] = k;
        }
        ++srow;
        for (int i = srow; i <= erow; ++i) {
            ++k;
            if (k > (n * m)) {
                break;
            }
            x[i][ecol] = k;
        }
        --ecol;
        for (int i = ecol; i >= scol; --i) {
            ++k;
            if (k > (n * m)) {
                break;
            }
            x[erow][i] = k;
        }
        --erow;
        for (int i = erow; i >= srow; --i) {
            ++k;
            if (k > (n * m)) {
                break;
            }
            x[i][scol] = k;
        }
        ++scol;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << x[i][j] << "\t";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i) {
        delete[] x[i];
    }

    delete[] x;
}
