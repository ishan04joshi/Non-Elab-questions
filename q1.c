#include <stdio.h>
int HRA(int a){
    int hra=a/10;
    return hra;
}
int DA(int a){
    int da = a/4;
    return da;
}
int Grosspay(int a, int b,int c){
    int total = a+b+c;
    return total;
}
int print(int a){
    printf("Your Total Salary is %d",a);
}
int main()
{
    int salary,hra,da,gross_pay,net_pay;
    printf("Enter the salary\n");
    scanf("%d", &salary);
    hra=HRA(salary);
    da= DA(salary);
    gross_pay=Grosspay(salary,hra,da);
    net_pay=salary;
    print(gross_pay);
    return 0;
}