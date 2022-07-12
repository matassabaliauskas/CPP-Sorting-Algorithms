// Space complexity: O(1)
// Time complexity: O(n^2)


#include <iostream>
using namespace std;

int *insertion_sort(int array2[], int length){
		//int temp;
		cout << "\n" <<  "new insertion_sort: " << "length = " << length << "\n";
		
		/*
		e.g. Input = 5 2 1 15 3
		
		1 2 5 15 3 
		1 2 5 15 3
		1 2 3 15 5
		1 2 3 5 15 
		*/
		
		int i = 0; // external loop
		int j = 0; // internal loop
		int smallest_index = 0;
		int smallest = array2[0];
		
		for (int i = 0; i< length-1; i++){
			for (int j = i+1; j < length; j++){
				if (array2[j] < smallest) {
					// find smallest integer and its index
					smallest = array2[j];
					smallest_index = j;
					cout << "smallest_index = " << j << ", new smallest = " << smallest << "\n";	
				}
			}
			
			// swap
			int temp = array2[i];
			array2[i] = array2[smallest_index];
			array2[smallest_index] = temp;
			cout << "swap successful! array2[" << i << "] = " << array2[i] << "\n";
			
			smallest = array2[i+1];
			smallest_index = i+1;
		
		}
		
		cout << "insertion_sort: " << "array2 = ";
		for (int i = 0; i < length; i++){
			cout << array2[i] << " ";
		}
		cout << "\n";
		
		return array2;
}

int main(void){
	int i = 0;
	int array1[] = {5, 2, 1, 15, 3}; // expected 1, 2, 3, 5, 15  
	//int array1[] = {5, 2, 1, 15, 3, 5, 2, 13, 1, 10}; // expected 1, 1, 2, 2, 3, 5, 5, 10, 13, 15    
	int size = sizeof(array1) / sizeof(array1[0]);
	//int length = sizeof(array1) / sizeof(array1[0]);
	//int length = *(&array1 + 1) - array1;
	
	cout << "Main: Input Array = ";
	for (int i = 0; i < size; i++){
		cout << array1[i] << " ";
	}
	cout << "\n";
	
	int *array3 = insertion_sort(array1, size);
	cout << "\n" << "Main: Sorted Array = ";
	for (int i = 0; i < size; i++){
		cout << array3[i] << " ";
	}
	
	return 1;
}
