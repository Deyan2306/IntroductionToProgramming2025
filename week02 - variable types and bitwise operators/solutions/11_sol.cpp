#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	char c1, c2, c3;
	std::cin >> c1 >> c2 >> c3;

	int first = c1 - '0';
	int second = c2 - '0';
	int third = c3 - '0';

	int number = (first * 100) + (second * 10) + third;

	std::cout << number;
}
