#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	int a, b;
	std::cin >> a >> b;

	a = b ^ a;
	b = a ^ b;
	a = b ^ a;


	// don't judge my formatting
	std::cout 
				<< "A: " 
				<< a 
					<< "  |  " 
				<< "B: " 
			<< b 
		<< std::endl;
}
