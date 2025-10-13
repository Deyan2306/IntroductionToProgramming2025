#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	int number;
	std::cin >> number;

	while (number) {
		
		std::cout << number % 10;
		number /= 10;
		
		if (number)
			std::cout << "-";
	}
}
