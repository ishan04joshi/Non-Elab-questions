#include <stdio.h>
int isEven(int num)
{
    if(num%2 == 0){
        return 1;
    }
    else return 0;
}
int isodd(int num){
    if(num%2 == 0){
        return 0;
    }
    else return 1;
}
int main()
{
    int num,even,odd;
   
    printf("Enter any number: ");
    scanf("%d", &num);
    even = isEven(num);
    odd = isodd(num);
    if(even == 1)
    {
        printf("The number is even.");
    }
    else if(odd == 1)
    {
        printf("The number is odd.");
    }
    return 0;
}