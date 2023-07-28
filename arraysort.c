#include <stdio.h>

int main()
{
    int i,j,b,a,n;
    scanf("%d",&n);
    int arr[n];
    for(b=0;b<n;b++){
        scanf("%d",&arr[b]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(b=0;b<n;b++){
        printf("%d ",arr[b]);
    } 
    return 0;
}