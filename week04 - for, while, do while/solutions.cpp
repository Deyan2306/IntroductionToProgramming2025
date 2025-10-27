#include <iostream>
#include <cmath>

void zad_01();
void zad_02();
void zad_03();
void zad_04();
void zad_05();
void zad_06();
void zad_07();
void zad_08();

// utility functions
int fact(int n, int(&result)[1000]);
double pow(int n, int m);
bool isPrime(int n);

int main()
{

	zad_08();

	return 0;
}

// exercise 1
void zad_01() {
	int n;
	std::cin >> n;

	int sum = 0;
	int product = 1;

	for (int i = 1; i <= n; i++) {
		std::cout << i << " ";
	
		sum += i;
		product *= i;
	}

	std::cout << std::endl
		<< "sum = " << sum << std::endl
		<< "product = " << product << std::endl;
}

// exercise 2
void zad_02() {
	int min, max;
	std::cin >> min >> max;

	// reorder the variables
	if (min > max) {
		min = min ^ max;
		max = min ^ max;
		min = min ^ max;
	}

	int sum = 0;
	int product = 1;

	for (int i = min; i <= max; i += 2) {
		if (i % 2 != 0)
			i++;
	
		std::cout << i << " ";

		sum += i;
		product *= i;
	}

	std::cout << std::endl
		<< "sum = " << sum << std::endl
		<< "product = " << product << std::endl;
}

// exercise 3
void zad_03() {
	int n;
	std::cin >> n;

	if (n < 0) {
		std::cout << "Invalid input" << std::endl;
		exit(-1);
	}

	int calcFact = 1;

	if (n > 0) {
		// използвам dynamic programming approach
		int dp[1000] = { 0 };

		calcFact = fact(n, dp);
	}

	std::cout << calcFact << std::endl;
}

int fact(int n, int (&result)[1000]) {
	if (n >= 0) {
		result[0] = 1;
		for (int i = 1; i <= n; i++) {
			result[i] = i * result[i - 1];
		}

		return result[n];
	}
}

// exercise 4
void zad_04() {

	int n, m;
	std::cin >> n >> m;

	double res = pow(n, m);
	
	std::cout << res << std::endl;

}

double pow(int n, int m) {
	double res = 1.00;

	if (m > 1) {
		for (int i = 0; i < m; i++) {
			res *= n;
		}
	}
	else if (m < 0) {
		for (int i = 0; i < abs(m); i++) {
			res *= 1.0 / n;
		}
	}

	return res;
}

// exercise 5
void zad_05() {
	int n;
	std::cin >> n;

	double sum = 1;

	for (int i = 2; i <= n; i++) {
		sum += (1.0 / pow(i, i));
	}

	std::cout << sum << std::endl;
}

// exercise 6
void zad_06() {
	int x, n;
	std::cin >> x >> n;

	int dp[1000] = { 0 };

	double sum = -1.0;

	std::cout << "term 1 value is 1" << std::endl;

	for (int i = 1; i < n; i++) {
		double current = 1.0 * (pow(-1.0, i) * (pow(x, 2.0 * i) / (fact(2.0 * i, dp))));

		std::cout << "term " << i << " value is: " << current << std::endl;
		sum -= current;
	}

	sum *= -1;

	std::cout << "The sum of the above numbers is: " << sum;
}

// exercuse 7
void zad_07() {
	int n;
	std::cin >> n;

	bool res = isPrime(n);

	std::cout << ((res == 1) ? "It is prime" : "It isn't prime") << std::endl;
}

bool isPrime(int n) {
	// Handle special cases
	if (n <= 1) return false;
	if (n <= 3) return true;  
	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false; 
		}
	}

	return true; 
}

void zad_08() {

	int n;
	std::cin >> n;

	for (int i = 1; i <= sqrt(n); i++) {
		if (i % n == 0) {
			std::cout << i << " ";
		}
	}

}

void zad_09() {

}
