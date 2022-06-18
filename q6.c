#include <stdio.h>
int main()
{
	int n,i;
    printf("Enter the no. of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    int *ptr[n];
    printf("Enter the value of elements in the array\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        ptr[i] = &arr[i];
    }
     
    for(i = 0; i < n; i++){
        printf("The Address of %d elements in the array is %u\n", i+1, ptr[i]);
    }

return 0;
}