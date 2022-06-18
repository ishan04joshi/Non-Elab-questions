#include <stdio.h>
int reverse(int *ptr[], int len){
    int temp;
    for(int i = 0; i<len/2; i++){
        temp = *ptr[i];
        *ptr[i] = *ptr[len-i-1];
        *ptr[len-i-1] = temp;
    }
}
int main()
{
    int n,len;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n], *ptr[n];
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
        ptr[i] = &arr[i];
    }
    len = sizeof(arr)/sizeof(arr[0]);
    reverse(ptr,len);
    printf("The reverse of the array is :\n");
     for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}