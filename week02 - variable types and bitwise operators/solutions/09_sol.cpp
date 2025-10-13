#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	int a;
	std::cin >> a;

	int _a = a - 1;

	std::cout << (!(_a & a) ? "Yes" : "No") << std::endl;
}
