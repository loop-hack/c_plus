#include <iostream>


/* Defining a function*/

int prodt(int x, int y){
	return x * y;
}


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


	// Product using defined func
	

	int product = prodt(firstnum, secondnum);
	std::cout << "The product is " << product << std::endl;

	return 0;
}
