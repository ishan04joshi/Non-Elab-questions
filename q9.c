#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
int n,i,sum=0,mean,sumation=0,meanstd,std;

//Assigning array to pointer


printf("Enter the number of elements you want to use: ");
scanf("%d",&n);
int arr[n];
int *ptr=arr;
printf("\nEnter %d Elements:",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);

//sum of elements of array using pointer
for (i=0;i<n;i++)
{
sum+=*ptr;
*ptr++;
}

mean=sum/n;
for (i=0;i<n;i++){
    sumation += (arr[i]-mean)*(arr[i]-mean); 
}
meanstd= sumation/n;
std= pow(meanstd,0.5);
//Display sum,mean and standard deviation on screen
printf("\nSum = %d\nmean = %d\nStandard daviation = %d",sum,mean,std);
getch();
}