//write the program to find the third largest element in an array
#include<stdio.h>
void thirdLargest(int arr[], int arr_size)
{
    if (arr_size < 3) {
        printf(" Invalid Input ");
        return;
    }
 
    int first = arr[0];
    for(int i = 1; i < arr_size; i++)
        if (arr[i] > first)
            first = arr[i];
    int second = INT_MIN;
    for (int i = 0; i < arr_size; i++)
        if (arr[i] > second && arr[i] < first)
            second = arr[i];
    int third = INT_MIN;
    for (int i = 0; i < arr_size; i++)
        if (arr[i] > third && arr[i] < second)
            third = arr[i];
 
    printf("The third Largest element is %d\n", third);
}
int main()
{int n;
printf("Enter the number of element to be storted\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter values for the array\n ");
		scanf("%d",&arr[i]);
	}

    int n = sizeof(arr) / sizeof(arr[0]);
    thirdLargest(arr, n);
    return 0;
	return 0;
}
