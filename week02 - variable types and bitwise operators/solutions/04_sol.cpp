#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	int a, b;
	std::cin >> a >> b;

	std::cout << "INPUT: " << a << b << std::endl;
	std::cout << "SUM: " << (a + b) << std::endl;
	std::cout << "ABS: " << abs(a - b) << std::endl;
	std::cout << "MOD: " << (a % b) << std::endl;
	std::cout << "DIV: " << (a / b) << std::endl;
	std::cout << "DIV_F: " << (float) (a / b) << std::endl;
	std::cout << "MIN(DIV_F): " << floor(a / b) << std::endl;
	std::cout << "MAX(DIV_F): " << ceil((float)a / (float)b) << std::endl;
	std::cout << "POW: " << pow(a, sqrt(b)) << std::endl;
	std::cout << "LOG: " << std::fixed << std::setprecision(5) << log2(floor(a / b)) << std::endl;

	return 0;
}
