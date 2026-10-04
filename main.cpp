#include <iostream>

// Lab 6 — Joshua Van Brunt
// CIS 5 Week 06 · Even and odd

int main() {
	int even = 0;
	for (int i = 0; i <= 100; i += 2) {
		even += i;
	}
	int odd = 1;
	int sum = 0;
	while (odd <= 99) {
		sum += odd;
		odd += 2;
	}
	std::cout << "Sum of even numbers: " << even << std::endl;
	std::cout << "Sum of odd numbers: " << sum << std::endl;
	return 0;
}