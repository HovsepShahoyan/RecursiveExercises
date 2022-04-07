#include <iostream>

int GCD ( int a , int b ){
	if ( a == 0 || b == 0 ){
		return 0;
	}
	else if ( a == b ){
		return a;
	}
	else if ( a > b ){
		return GCD( a - b , b );
	}
	else { 
		return GCD ( a , b - a );
	}
}

int main(){
	int num1 = 0;
	int num2 = 0;
	std::cout << "Enter two values: ";
        std::cin >> num1 >> num2 ;
	std::cout << "The result is: " << GCD ( num1 , num2 );

}
