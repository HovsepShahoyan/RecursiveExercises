#include <iostream>

int sumUntill( int num ) {
	if( num == 0 ){
		return num;
	}
	else{
	return num + sumUntill(num - 1);
	}
}


int main(){
	int num = 0;
	std::cout << "Enter the number: ";
	std::cin >> num;
	if( num < 0 ){
		num = 0 - num;
	}
	std::cout << "The result is: " << sumUntill( num );
}
