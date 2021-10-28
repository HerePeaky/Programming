#include <iostream>
int main() {
	int Number;
	std::cin >> Number;
	int base = 1000;
	char syms[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
	for (int count = -1; count < 3; ++count) {
		int digit = Number / base;
		int offset = 2*count;
		if (digit < 4) {
			for (int count = 0; count < digit; ++count)
				std::cout << syms[offset + 2];
		}
		else { 
			if (digit == 9)
				std::cout << syms[offset + 2] << syms[offset];
			else
			{
				if (digit == 4)
					std::cout << syms[offset + 2];
				std::cout << syms[offset + 1];
				for (int count = 5; count < digit; ++count)
					std::cout << syms[offset + 2];
			}	
		}
		Number %= base;
		base /= 10;
	}
	std::cout << "\n";
	return 0;
}