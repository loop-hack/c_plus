#include <iostream>
#include <string>

int main(){

	int age;
	std::string name;

	std::cout << "Please give your name : " << std::endl;

	std::cin >> name;

	std::cout << "Please give your age : "<< std::endl;

	std::cin >> age;

	std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;


	/* We can also take both input at the same time */

	std::cout << "Give your name and age : " << std::endl;
	std::cin >>name >> age;

	std::cout << "Hi " << name << " You are " << age << " years old." << std::endl;

	return 0;

}
