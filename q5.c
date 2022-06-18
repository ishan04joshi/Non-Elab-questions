#include <stdio.h>


void sort(int n, int* ptr)
{
	int i, j, t;

	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}
    i=n-1;
    printf("The greatest elements is %d ", *(ptr + i));
}


int main()
{
	int n,i;
    printf("Enter the no. of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the value of elements in the array\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

	sort(n, arr);

	return 0;
}
