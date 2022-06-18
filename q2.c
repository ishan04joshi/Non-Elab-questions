#include <stdio.h>
int main()
{
    char input;
    printf("Enter the character for which you want to check the ASCII value\n");
    scanf("%c", &input);
    printf("The ASCII value of %c is %d\n", input, input);
    return 0;
}
