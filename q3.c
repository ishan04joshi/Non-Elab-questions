#include <stdio.h>
void prime(int a){
    
    int i = 2, check = 0, prime=1;
    if (a == 2)
    {
        printf("%d ", a);
    }
    else
    {
        while (i < a )
        {
            check = a % i;
            if (check == 0)
            {
                prime = 0;
                break;
            }

            i++;
        }
        if(((prime == 1 && a!=0) && a!=1)&& a!=2){
            printf("%d ", a);
        }

    }
}
void Factor(int a){
    for ( int i = 1; i <=a; i++)
    {
        if(a%i==0){
            prime(i);
        }
    }
    
    
}
int main()
{
    int input;
    printf("Enter the number to get its prime factors\n\n");
    scanf("%d", &input);
    printf("The Prime Factos are \n");
    Factor(input);
    return 0;
}