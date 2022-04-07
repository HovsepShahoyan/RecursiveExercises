#include <iostream>
bool isPrime( int num ){
	bool b = true;
	if ( num == 1 ){
		return b;
	}
	for ( int i = 2; i < num ; i++ ){
		if( num % i == 0 ){
			b = false;
			break;
		}	
	}
	return b;
}

bool isSumOfPrimes( int num ){
  for ( int i = 1 ; i < num ; i++ ){
	if ( isPrime ( i ) && isPrime ( num - i) ){
		return true;	
	}
}
return false;
}



int main(){

	int NumberEX2 = 0;
	std::cout << "Enter the number for exericse 2: ";
	std::cin >> NumberEX2;
		if( isPrime(NumberEX2)) {
			std::cout << " It is Prime ";
		}
		else {
			std::cout << " It is not Prime ";
		}

	std::cout << std::endl;
	int NumberEX3 = 0;
	std::cout << "Enter the number for exercise 3: ";
	std::cin >> NumberEX3;

		if ( isSumOfPrimes ( NumberEX3 )) {
			std::cout << "It is sum of Prime Numbers";
		}
		else {
			std::cout << "It is not sum of Prime Number";
		}
}
