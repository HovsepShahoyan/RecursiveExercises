#include <iostream>

void toBinary (int n ){
	if ( n !=  0 && n != 1 ){
		std::cout << n % 2;
		toBinary(n/2);
	}
	else{ std::cout << n;}
}

int main(){
	int num = 0;
	std::cout << "Enter the number: " ;
	std::cin >> num;
	toBinary(num);
}
