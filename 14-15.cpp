#include <iostream>

int max_Arr ( int size , int* arr ){
	static int i = 0;
	static int max = arr[0];
	if ( i < size ){
		if ( arr[i] >=  max ) {
		max = arr[i];
		}
		++i;
		max_Arr ( size , arr );
	}
		return max;
	
}

int min_Arr ( int size , int* arr ) {
	static int i = 0;
	static int min = arr[0];
	if ( i < size ){
		if ( arr[i] <= min ){
			min = arr[i];
		}
		i++;
		min_Arr ( size , arr );
	}
	return min;
}

int main(){
	int arr[5];
	int SIZE = 5;
	for( int i = 0 ; i < SIZE ; i++ ){
		std::cout << "Enter the element: " ;
		std::cin >> arr[i] ;
	}	
	int result1 = max_Arr ( SIZE , arr );
	std::cout << "The result is: " << result1;
	int result2 = min_Arr ( SIZE , arr );
	std::cout << "The second result is: " << result2;
}
