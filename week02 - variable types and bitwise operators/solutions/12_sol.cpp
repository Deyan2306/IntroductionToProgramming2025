#include <iostream>
#include <bitset>
#include <string>

int main() {

	int number;
	std::cin >> number;

	std::string binary = std::bitset<8>(number).to_string();

	std::cout << binary << std::endl;
}
