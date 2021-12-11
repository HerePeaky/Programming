#include <iostream>
int main() {
	int Number, a1, a2, a3, a4;
	std::cin >> Number;
	a1 = Number / 1000;
	a2 = (Number / 100) % 10;
	a3 = (Number % 100) / 10;
	a4 = Number % 10;
	std::cout << a1 << " " << a2 << " " << a3 << " " << a4 << "\n";
	for (int count = 0; count < a1; ++count) {
		std::cout << "M";
	}
	if (a2 < 4) {
		for (int count = 0; count < a2; ++count)
			std::cout << "C";
	}
	else if (a2 == 4) {
		std::cout << "CD";
	}
	else if (a2 == 5) {
		std::cout << "D";
	}
	else if (a2 > 5 and a2 < 9) {
		std::cout << "D";
		for (int count = 5; count < a2; ++count) {
			std::cout << "C";
		}
	}
	else if (a2 == 9) {
		std::cout << "CM";
	}
	if (a3 < 4) {
		for (int count = 0; count < a3; ++count)
			std::cout << "X";
	}
	else if (a3 == 4) {
		std::cout << "XL";
	}
	else if (a3 == 5) {
		std::cout << "L";
	}
	else if (a3 > 5 and a3 < 9) {
		std::cout << "L";
		for (int count = 5; count < a3; ++count) {
			std::cout << "X";
		}
	}
	else if (a3 == 9) {
		std::cout << "XC";
	}
	if (a4 < 4) {
		for (int count = 0; count < a4; ++count)
			std::cout << "I";
	}
	else if (a4 == 4) {
		std::cout << "IV";
	}
	else if (a4 == 5) {
		std::cout << "V";
	}
	else if (a4 > 5 and a4 < 9) {
		std::cout << "V";
		for (int count = 5; count < a4; ++count) {
			std::cout << "I";
		}
	}
	else if (a4 == 9) {
		std::cout << "IX";
	}
	return 0;
}