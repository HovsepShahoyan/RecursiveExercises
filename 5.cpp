#include <iostream>
int factorial ( int F ){
	if( F == 1 ) {
		return 1;
	}
	else {
	 return F * factorial ( F - 1 );
	}	
}

int main (){
	int number = 0;
	std::cout << "Enter the number: ";
	std::cin >> number;
	std::cout << "The factorial is: " << factorial( number ) ;
	
}
