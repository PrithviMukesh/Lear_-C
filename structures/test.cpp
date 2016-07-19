#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)//15
    {
        remainder = n%10;//153/10 = 3
        reversedNumber = reversedNumber*10 + remainder; //= 351
        n /= 10;
    }

    printf("Reversed Number = %d",reversedNumber);

    return 0;
}
