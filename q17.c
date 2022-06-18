#include <stdio.h>
int add(int *ptrA, int *ptrB){
    int Total[5],a,i;
    for(i=0;i<5; i++){
        Total[i] =ptrA[i] + ptrB[i];
    }
    for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if (Total[i] > Total[j]) 
                {
                    a =  Total[i];
                    Total[i] = Total[j];
                    Total[j] = a;
                }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",Total[i]);
    }
}
int main()
{
    int A[5],B[5];
    int *ptrA[5], *ptrB[5];
    for(int i=0; i<5; i++){
        printf("The value of A[%d]\n", i);
        scanf("%d",&A[i]);
        printf("The value of B[%d]\n", i);
        scanf("%d",&B[i]);
        ptrA[i] = &A[i];
        ptrB[i] = &B[i];
    }
    add(ptrA[x],ptrB[x]);
    return 0;
}