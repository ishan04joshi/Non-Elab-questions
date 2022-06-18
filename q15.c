#include <stdio.h>

#define PI 3.1415
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define x 10
#undef x
#include <conio.h>
#define NUMBER 1
// #ifndef __MATH_H
// #error First include then compile
// #else 
void func() ;  
  
#pragma startup func  
#pragma exit func

int main()
{
    printf("%f", PI);
    printf("Minimum between 10 and 20 is: %d\n", MIN(10, 20));
    // printf("%d", x);
    // int NUMBER = 10;
#if NUMBER == 0
    printf("Value of Number is: %d", NUMBER);
#else
    print("Value of Number is non-zero");
#endif
    getch();

    //  float a;  
    // a=sqrt(7);  
    // printf("%f",a);
    return 0;
}
// #endif

void func(){  
printf("\nI am in func");  
getch();  
}  