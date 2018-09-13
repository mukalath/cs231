/*
 * 03
 * Selection Sort
 * Author : Nikhil M Tomy
 * 
 */

#include <stdio.h>

int insertionSort(int array[], int size) {
	int i, j, temp;
	for (i=1; i<size; i++) {
		for (j=i-1; j>=0; j--) {
			if (array[j] > array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
void main() {
	int array[100], i, j, size;

	printf("Enter size of the array : ");
	scanf("%d", &size);

	printf("Enter array\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	insertionSort(array, size);
	
	printf("Sorted array\n");
	for (i=0; i<size; i++) {
		printf("%d\n", array[i]);
	}
}