#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	int number;
	std::cin >> number;

	std::cout << ((number % 2) ? "Yes" : "No") << std::endl;
}
