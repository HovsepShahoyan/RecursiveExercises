#include <iostream>
int intervalBetween(int num1, int num2){
return num2 - num1;
}
int main(){
	int First = 5;
	int Second = 6;
	std::cout << "Interval is: " << intervalBetween(First,Second);
}
