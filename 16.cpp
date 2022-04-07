#include <iostream> 
#include <string>
char first_Upper( std::string str , int length ){
	static int index = 0;
	static char ch ;
	if ( index  < length ){
	if ( str[index] >= 65 && str[index] <= 95 ){
		ch = str[index];
	}
	index++;
	first_Upper( str , length );
	}
	return ch;
}

int main () {
	std::string str;
	std::cout << "Enter the string: ";
	std::cin >> str;
	int length = str.size();
	char result = first_Upper ( str , length );
	std::cout << "The result is: " << result;
}


