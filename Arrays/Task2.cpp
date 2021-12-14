#include <iostream>
int main() {
	int N;
	float x;
	std::cout << "Enter polynomial degree N = ";
	std::cin >> N;
	std::cout << "Enter x = ";
	std::cin >> x;
	int* m = new int[N + 1];
	int sum = 0;
	float curr = 1;
	std::cout << "Enter coefficients at degrees: \n";
	for (int i = 0; i <= N; ++i)
	{
		std::cout << i << ": ";
		std::cin >> m[i];
		sum += m[i] * curr;
		curr *= x;
	}
	std::cout << " Answer: =  " << sum << std::endl;

	delete[] m;
}