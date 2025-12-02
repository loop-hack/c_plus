#include <iostream>


int num_sum(int a, int b){
	int x_sum = a + b;
	return x_sum;
}

int prod(int c, int d){
	int product = c * d;
	return product;
}

int main(){

	// Statement is line of code which ends with ;
	
	int firstnumber = 5;
	int secondnumber = 10;
	int sum = firstnumber + secondnumber;
	std::cout << "The sum of numbers are " << sum << std::endl;

	int x  = num_sum(3,7);
	printf("%d",x);

	int p = prod(12, 4);
	printf("%d", p);

	return 0;
}
