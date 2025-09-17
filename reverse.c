#include<stdio.h>
#include <stdlib.h>
void reverseArray (int arr[],int n) {
	int max_element=arr[0];
	for (int i=1; i<size; i++) {
		if(arr[i] > max_element) {
			max_element=arr[i];
		}
	}
	return max_element;
}
int main() {
	int arr[]={1,2,4,5,6,89,23,7};
	int size= sizeof(arr)/sizeof(arr[0]);
	printf("The maximum element in the array is: %d\n", maximum);
	return 0;
 }
