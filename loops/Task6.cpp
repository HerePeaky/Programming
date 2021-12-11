#include <iostream>
int main() {
	int n, count, vertex;
	std::cin >> n;
	count = 0;
	vertex = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n * 3 + 1;
		}
		if (vertex < n)
			vertex = n;
		++count;
	}
	std::cout << "Count of steps:  " << count << "  Vertex:  " << vertex;
	return 0;
}