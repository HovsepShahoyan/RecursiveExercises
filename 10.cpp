#include <iostream>

int sumOfDigits( int num ){
if( num -  10 < 0){
	return num;
}
return num % 10 + sumOfDigits( num/10 );
}


int main(){
	int num = 0;
	std::cout << "Enter the number: ";
	std::cin >> num ;
	std::cout << "The result is: " << sumOfDigits( num );
}
