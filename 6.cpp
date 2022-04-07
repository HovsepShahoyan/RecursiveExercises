#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

void ReverseString( std::string &str, int start, int end ){
	
	if( start < end ){
		std::swap ( str[start],str[end] );
		ReverseString( str, start + 1 , end - 1 ); 	
	}
	else {
		return;
	}
	

}

int main () {
	std::string str = " ";
	std::cout << "Enter the string: ";
	std::cin >> str;
	ReverseString ( str , 0 , str.size() - 1);
	std::cout << "The result is: " << str;
}
