#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

int main() {

	int n1, n2, n3, n4, n5;
	std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

	// the same number under exlusive or is equal to 0 :p

	std::cout << (n1 ^ n2 ^ n3 ^ n4 ^ n5) << std::endl;

}
