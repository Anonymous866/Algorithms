#include <iostream.h> 
using namespace std; 

void swap(int* a, int* b) { 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 
int partition (int arr[], int low, int high) { 
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++) { 
		if (arr[j] < pivot)  { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 
void sort(int arr[], int low, int high)  { 
	if (low < high)  { 
		int pi = partition(arr, low, high); 
		sort(arr, low, pi - 1); 
		sort(arr, pi + 1, high); 
	} 
} 
int main()  { 
	int arr[] = {12,22,10,2002,1,20,7}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	sort(arr, 0, n - 1); 

	for (int i = 0; i < size; i++) 
		cout<<arr[i]; 
        
	return 0; 
} 
