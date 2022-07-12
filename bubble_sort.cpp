// Space complexity: O(1)
// Time complexity: O(n^2)


#include <iostream>
using namespace std;


int *bubble_sort(int array2[], int length){
	
		//cout << "\n" <<  "new bubble_sort: " << "length = " << length << "\n";
		
		int i = 0;
		int j = 0;
		int temp;
		
		for (i =  1; i < length; i++){
			for (j = 1; j < length; j++){
				if (array2[j-1] > array2[j]){
					temp = array2[j-1];
					array2[j-1] = array2[j];
					array2[j] = temp;
				}
			}
		}
		
		cout << "bubble_sort: " << "array2 = ";
		for (i = 0; i< length; i++){
			cout << array2[i] << " ";
		}
		cout << "\n";
		
		
		
		return array2;
}



int main(void){
	int i = 0;
	int array1[] = {5, 2, 1, 15, 3, 5, 2, 13, 1, 10}; // expected 1, 1, 2, 2, 3, 5, 5, 10, 13, 15,      
	int size = sizeof(array1) / sizeof(array1[0]);
	cout << "Main: Input Array Size = " << size << "\n";
	//int length = sizeof(array1) / sizeof(array1[0]);
	//int length = *(&array1 + 1) - array1;
	
	cout << "Main: Input Array = ";
	for (int i = 0; i < size; i++){
		cout << array1[i] << " ";
	}
	cout << "\n";
	
	int *array3 = bubble_sort(array1, size);
	cout << "\n" << "Main: Sorted Array = ";
	for (int i = 0; i < size; i++){
		cout << array3[i] << " ";
	}
	
	return 1;
}
