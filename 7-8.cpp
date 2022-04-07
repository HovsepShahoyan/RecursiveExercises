#include <iostream>
void reverseArray( int arr[], int i ) {
	if ( i >= 0){
		std::cout << arr[i] << " " ;
	        reverseArray ( arr , i - 1 ); }
	else{ return; }
}

void printArray( int arr[], int i, int size){
	if ( i < size ){
		std::cout << arr[i] << " ";
		printArray( arr , i +1  , size);
	}	
}

int main(){
	const int size = 5;
	int i = 0;
	int arr[size] = {0};
	for( int i = 0 ; i < size ; i++ ){
		 std::cout << "Enter the element: ";
		 std::cin >> arr[i];
	}
	
	reverseArray( arr , size - 1 );
	printArray( arr , i , size );

}
