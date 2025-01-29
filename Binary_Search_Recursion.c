#include<stdio.h>

int binary_Search(int arr[], int left, int right, int ele) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the mid index
        if (arr[mid] == ele)
            return mid;

        // If target is smaller than mid, search the left subarray
        if (arr[mid] > ele)
            return binary_Search(arr, left, mid - 1, ele);

        // Else, search the right subarray
        return binary_Search(arr, mid + 1, right, ele);
    }

    // If the target is not found, return -1
    return -1;
}


void main()
{
	// Size of array
	int s;
	printf("Enter the size of the array = ");
	scanf("%d",&s);
	
	// Elements of the array
	int arr[s], i;
	printf("\nEnter the elements of the array : ");
	for(i = 0; i < s; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	// Displaying the array elements
	int j;
	printf("\nThe elements of the array are : ");
	for(j = 0; j < s; j++)
	{
		printf("%d\t",arr[j]);
	}
	
	int n;
	printf("\nEnter the element to be searched = ");
	scanf("%d",&n);
		
	int result = binary_Search(arr, 0, s - 1, n);

    // Displaying the result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");
}
