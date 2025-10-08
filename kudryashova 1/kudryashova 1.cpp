#include <iostream>
#include <string>
int main() {
	std::string name;
	std::cout << "what is your name?";
	std::getline(std::cin, name);
	std::cout << "Hello," << name << "!<3" << std::endl;
	return 0;
 }