#include <iostream>

int main(){

	// Statement is line of code which ends with ;
	
	int firstnumber = 5;
	int secondnumber = 10;
	int sum = firstnumber + secondnumber;
	std::cout << "The sum of numbers are " << sum << std::endl;

	int  sum_num(int a,int b){
		int sum_1 =  a + b;
		return sum_1;
	}

	int x  = sum_num(3,7);
	printf("%d",x);

	return 0;
}
