//  WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice 

#include <stdio.h>
void sortArray(int arr[], int n, int choice) {
    int i, j, temp;

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) || (choice == 2 && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

main() 
{
    int n, i, choice;

    
    printf("Enter the number of elements for both arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

   
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    
    printf("Enter 1 for Ascending or 2 for Descending order: ");
    scanf("%d", &choice);

    
    sortArray(arr1, n, choice);
    sortArray(arr2, n, choice);

    printf("Sorted first array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSorted second array:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr2[i]);
    }
}

