#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    int arr[20], i, j, k,n;  
      
    printf (" Enter the number of elements in an array: ");  
    scanf (" %d", &n);  
      printf (" \n Enter %d elements of an array: \n ",n);  
    for ( i=0;i<n;i++)  
    {  
        scanf("%d",&arr[i]);  
    }  
    for (i=0;i<n;i++)  
    {  
        for(j=i+1;j<n;j++)  
        {  
            if (arr[i] == arr[j])  
            {  
                for (k =j;k<n-1;k++)  
                {  
                    arr[k] = arr[k + 1];  
                }  
                n--;  
                j--;      
            }  
        }  
    }    
    printf (" \n Array elements after deletion of the duplicate elements:");   
    for (i=0;i<n;i++)  
    {  
        printf (" %d \t",arr[i]);  
    }  
    return 0;  
}  
