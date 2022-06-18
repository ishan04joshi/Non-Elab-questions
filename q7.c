#include <stdio.h>
int isprime(int num){
     int i = 2, check = 0, prime=1;
    if (num == 2)
    {
        return 1;
    }
    else
    {
        while (i < num )
        {
            check = num % i;
            if (check == 0)
            {
                prime = 0;
                break;
            }

            i++;
        }
        if(((prime == 1 && num!=0) && num!=1)&& num!=2){
            return 1;
        }

    }
    return 0;
}
int main (){
int start,end;
printf("Enter the Start and end of the range\n");
scanf("%d %d", &start, &end);
for (int i = start; i <= end; i++){
    int result =isprime(i);
    if(result == 1){
        printf("%d ", i);
    }
}
return 0;
}