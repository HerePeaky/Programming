#include <iostream>
#include <fstream>
#include <string>
std::string to16(int n) {
	std::string str;
	int d = 1;
	int n_tmp = n;
	while ((n_tmp /= 16) != 0)
		d *= 16;
	while (d != 0) {
		if ((n / d) < 10) {
			str += std::to_string (n / d);
		}
		else {
			str +=  (((n / d) % 10) + 65);
		}
		n %= d;
		d /= 16;
	}
	return str;
}
int main() {
	std::ifstream input("input.txt", std::ifstream::binary);
	if (!input.is_open()) {
		std::cout << "Input file could not open";
		return -1;
	}
	int counter = 0;
	input.seekg(0, input.end);
	int length = input.tellg();
	input.seekg(0, input.beg);
	char* filestring = new char[length];
	input.read(filestring, length);
	size_t NumOfLine = 0;
	for (int i = 0; i < 10; ++i) {
		std::cout << '0';
	}
	std::cout << ": ";
	for (size_t index = 0; index <= length; ++index) {
		if (index == length) {
			int residual;
			if (counter > 8)
				residual = 16 - counter;
			else residual = 17 - counter;
			for (size_t spaces = 0; spaces < residual; ++spaces) {
				std::cout << "   ";
			}
			for (size_t c = index - counter; c < index; ++c) {
				std::cout << filestring[c];
			}
			std::cout << std::endl;
			break;
		}
		else {
			int temp = (int)filestring[index];
			if (temp < 32) {
				temp = 46;
			}
			std::string current = to16(temp);
			for (size_t i = 0; i < current.length(); ++i) {
				std::cout << current[i];
			}
			std::cout << " ";
			++counter;
			if (counter == 8) {
				std::cout << "|";
			}
			if (counter == 16) {
				counter = 0;
				++NumOfLine;
				for (int c = index - 15; c <= index; ++c) {
					if ((int)filestring[c] < 32)
						std::cout << (char)46;
					else
						std::cout << filestring[c];
				}
				std::cout << std::endl;
				std::string hexNumOfLine = to16(NumOfLine);
				int residual = 9 - (int)hexNumOfLine.length();
				for (size_t i = 0; i < residual; ++i) {
					std::cout << 0;
				}
				std::cout << hexNumOfLine << "0: ";
			}
		}
	}
	delete[] filestring;
	input.close();
	return 0;
}