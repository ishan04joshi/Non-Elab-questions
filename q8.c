#include <stdio.h>
int sum(int a);

int main()
{
    int a;
    printf("Enter the number upto wich you wanna find fibonacci series\n");
    scanf("%d", &a);
    printf("The %d term of series is \n %d", a,sum(a));

    return 0;
}
int sum(int a)
{
     int result, n = 1;

    if (a == 1)
    {
        result =0;
        return result;
    }
    else if (a == 2)
    {
       result =1;
        return result;
    }
    else
    {
        result = sum(a - 1) + sum(a - 2);
       
    }
     return result;
}