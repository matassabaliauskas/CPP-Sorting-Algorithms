// Space complexity: O(logn)
// Time complexity: O(nlogn)


#include <iostream>
using namespace std;


// function to print the array
void printArray(int a[], int size)
{
    int i;
    cout << "printArray: " << "array = ";
    for (i=0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    printf("\n");
}

int *insertion_sort(int array2[], int length){
	
		cout << "\n" <<  "new quick_sort: " << "length = " << length << "\n";		
		printArray(array2, length);
	
		for (int i = 1; i < length; i++) {
			int index = i;			
			while(index > 0 && array2[index] < array2[index-1]){
				printf("switching! previous = [%d] and current = [%d]\n", array2[index-1], array2[index]);
				int temp = array2[index-1];
				array2[index-1] = array2[index];
				array2[index] = temp;
				index--;
			}
			printArray(array2, length);
		}
		
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
	
	int *array3 = insertion_sort(array1, size);
	cout << "\n" << "Main: Sorted Array = ";
	for (int i = 0; i < size; i++){
		cout << array3[i] << " ";
	}
	
	return 1;
}
