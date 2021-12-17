#include <iostream>
#include <string>
int main() {
	std::string tolower = "";
	std::string x = "AaBbCc";
	char c;
	for (int i = 0; i < x.length(); ++i) {
		if (x[i] >= 65 and x[i] <= 90) {
			c = x[i] + 32;
			tolower += c;
		} else tolower += x[i];
	}
    std::cout << tolower;
	return 0;
}
