#include <stdio.h>
int main()
{
    int a,*ptr,**dblptr;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    ptr= &a;
    dblptr= &ptr;
    printf("The address of the a is %u\n", ptr);
    printf("The address of the ptr is %u\n", dblptr);
    return 0;
}       