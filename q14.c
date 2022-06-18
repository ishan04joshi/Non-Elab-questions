#include <stdio.h>

int main()
{

	int N = 4;

	int *ptr1, *ptr2;


	ptr1 = &N;
	ptr2 = &N;

	printf("Pointer ptr1 "
		"before Increment: ");
	printf("%u \n", ptr1);

	
	ptr1++;

	printf("Pointer ptr1 after"
		" Increment: ");
	printf("%u \n\n", ptr1);

	printf("Pointer ptr1 before"
		" Decrement: ");
	printf("%u \n", ptr1);

	
	ptr1--;

	printf("Pointer ptr1 after"
		" Decrement: ");
	printf("%u \n\n", ptr1);

	return 0;
}
