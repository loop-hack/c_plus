#include <iostream>

/* First we need to define a fuction before main to use in main */

int addnumber(int first, int second){
	return first + second;
}

int productno(int firstno, int secondno){
	return firstno * secondno;
}

int main(){
	int firstnum = 15;
	int secondnum = 25;
	int sum = addnumber(firstnum, secondnum);
	int product = productno(firstnum, secondnum);
	std::cout << "The Sum of given numbers are: " << sum  << std::endl;
	std::cout << "The Product of given numbers are: "<< product  << std::endl;
}
