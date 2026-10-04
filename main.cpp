#include <iostream>
#include <string>

// Homework 6 —Joshua Van Brunt
// CIS 5 Week 06 · Menu

int main() {
	int selection = 0;
	
	do {
		std::cout << "\n===== MENU =====" << std::endl;
		std::cout << "1. Say Hello" << std::endl;
		std::cout << "2. Count Down" << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> selection;

		if (selection == 1) {
			std::string user;
			std::cout << "Enter your name: ";
			std::cin >> user;
			std::cout << "Hello, " << user << "!" << std::endl;
		}
		else if (selection == 2) {
			int number = 10;
			std::cout << "Counting down:" << std::endl;
			while (number >= 1) {
				std::cout << number << std::endl;
				number--;
			}
		}
		else if (selection == 3) {

		}



	}

	while (selection > 3 || selection < 1);
	

	return 0;
}
