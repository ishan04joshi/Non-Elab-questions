#include <stdio.h>
int calculate(char c, int a){
    int ascii = c;
    if(ascii == 99){
        printf("The charge is %d\n", a*10);
    }
    else if(ascii ==98){
        printf("The charge is %d\n", a*20);
    }
    else if(ascii ==116){
        printf("The charge is %d\n", a*5);
    }
}
int main()
{
    char choice;
    int hrs;
    printf("Enter the type of vehicle :Car(c),Bus(b), Two wheeler(t)\n");
    scanf("%c", &choice);
    printf("Enter the Hours of parking\n");
    scanf("%d", &hrs);
    calculate(choice, hrs);
    return 0;
}