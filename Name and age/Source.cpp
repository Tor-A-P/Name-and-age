#include <iostream>
#include <string>
#include <cctype>

int age{};
std::string FirstName{};
std::string LastName{};

int main() {
	system("Color a");

	std::cout << "What's your first name? (No spaces!)" << std::endl;
	std::cin >> FirstName;
	FirstName[0] = toupper(FirstName[0]);
	system("cls");
	std::cout << "Alright, " << FirstName << ". What's your last name?" << std::endl;
	std::cin >> LastName;
	LastName[0] = toupper(LastName[0]);
	system("cls");
	std::cout << FirstName << " " << LastName << ", what a nice name! Now, what's your age?" << std::endl;
	std::cin >> age;
	system("cls");
	std::cout << "Your name is " << FirstName << " " << LastName << " and you are " << age << " years old, ";
	
	if (age >= 18) {
		std::cout << "which is old enough to drink! Cheers, mate!" << std::endl;
	}
	else if (age < 18) {
		std::cout << "which isn't old enough to drink, get outta here!" << std::endl;
	}
	else {
		std::cout << "and something went wrong!" << std::endl;
	}
		
	return 0;
}