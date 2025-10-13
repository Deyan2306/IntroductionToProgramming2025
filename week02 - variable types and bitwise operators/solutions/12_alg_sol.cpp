#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

int main() {

	std::string binary;
	int number;
	std::cin >> number;

	while (number > 0) {
		int bit = number % 2;
		binary.push_back(bit - '0');
		number /= 2;
	}

	std::reverse(binary.begin(), binary.end());
	std::cout <<  binary << std::endl;

}
