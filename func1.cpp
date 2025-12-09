#include <iostream>


int main(){

	int firstnum {14};
	int secondnum {16};

	std::cout << "First Number: "<< firstnum << std::endl;
	std::cout << "Second Numebr: " << secondnum << std::endl;

	/* operations on variable */

	int sum = firstnum + secondnum;

	std::cout << "Sum is " << sum << std::endl;


	// Alternative way to do is
	

	std::cout << "Difference is " << firstnum - secondnum << std::endl;

	return 0;
}
