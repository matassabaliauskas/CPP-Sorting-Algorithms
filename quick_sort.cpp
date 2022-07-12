// Space complexity: O(logn)
// Time complexity: O(nlogn)

#include <iostream>
using namespace std;

int *quick_sort(int array2[], int length){
	if (length < 2) {
		return 0;
	}
	else if (length == 2) {
		cout << "\n" <<  "new quick_sort: " << "length = " << length << "\n";
		cout << "array2 = " << array2[0] << " " << array2[1] << "\n";
		if(array2[0] > array2[1]){
			int temp = array2[0];
			array2[0] = array2[1];
			array2[1] = temp;
		}
		cout << "array2 rearranged = " << array2[0] << " " << array2[1] << "\n";
		return array2;
	} else {
		cout << "\n" <<  "new quick_sort: " << "length = " << length << "\n";
		cout << "quick_sort: " << "array2 = ";
		int i = 0;
		for (int i = 0; i< length; i++){
			cout << array2[i] << " ";
		}
		cout << "\n";
		
		
		int lower[length];
		int greater[length];
		int pivot = array2[length-1];
		int index_greater = 0;
		int index_lower = 0;
		
		for (int i = 0; i< length-1; i++){
			if(array2[i] > pivot){
				greater[index_greater] = array2[i];
				//cout << "quick_sort: " << "greater = " << greater[index_greater] << "\n";
				index_greater++;
			} else {
				lower[index_lower] = array2[i];
				//cout << "quick_sort: " << "lower = " << lower[index_lower] << "\n";
				index_lower++;
			}
		}
		
		int length_greater = index_greater;
		int length_lower = index_lower;
		//cout << "\n" << "quick_sort: " << "length_greater = " << length_greater << " and " << "length_lower = " << length_lower << "\n";
		
		cout << "quick_sort: " << "lower array = ";
		for (int i = 0; i < length_lower; i++){
			cout << lower[i] << " ";
		}
		cout << "\n";
		
		cout << "quick_sort: " << "greater array = ";
		for (int i = 0; i < length_greater; i++){
			cout << greater[i] << " ";
		}
		cout << "\n";
		
		quick_sort(lower, length_lower);
		
		quick_sort(greater, length_greater);

		
		
		int new_array[length];
		int new_array_index = 0;
		for (int i = 0; i < length_lower; i++) {
			new_array[new_array_index] = lower[i];
			//cout << "lower element added: " << new_array[new_array_index] << "\n";
			new_array_index++;
		}
		
		new_array[new_array_index] = pivot;
		//cout << "pivot added: " << new_array[new_array_index] << "\n";
		new_array_index++;
		
		for (int i = 0; i < length_greater; i++) {
			new_array[new_array_index] = greater[i];
			//cout << "greater element added: " << new_array[new_array_index] << "\n";
			new_array_index++;
		}
		
		cout << "new_array = ";
		for (int i = 0; i < length; i++) {
			cout << new_array[i] << " ";
		}
		cout << "\n";
		
		for (int i = 0; i < length; i++) {
			array2[i] = new_array[i];
		}
		return array2;
	}
}

int main(void){
	int size = 10;
	int i = 0;
	

	int array1[size] = {5, 2, 1, 15, 3, 5, 2, 13, 1, 10}; // expected 1, 1, 2, 2, 3, 5, 5, 10, 13, 15,      
	cout << "Main: Input Array = ";
	for (int i = 0; i < size; i++){
		cout << array1[i] << " ";
	}
	cout << "\n";
	//int length = sizeof(array1) / sizeof(array1[0]);
	//int length = *(&array1 + 1) - array1;

	int *array3 = quick_sort(array1, size);
	cout << "\n" << "Main: Sorted Array = ";
	for (int i = 0; i < size; i++){
		cout << array3[i] << " ";
	}
	
	return 1;
}
