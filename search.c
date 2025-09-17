#include<stdio.h>
int main() {
	int arr[]={10,20,30,40,50};
			int n= sizeof(arr)/sizeof(arr[0]);
			int search_element=40;
			int found_index=-1;
			for(int i=0;i<n;i++) {
			if (arr[i]==search_element) {
			found_index=i;
			break;
			}
			}
			if (found_index !=-1) {
			printf("element %d  found at index %d\n", search_element,found_index);
			} else {
			printf("Element %d not found in the array \n",search_element);
			}
			return 0;
			}

