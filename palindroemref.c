#include <stdio.h>
int palindrome(int *n);

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    palindrome(&n);
}
int palindrome(int *n)
{
    int temp=*n,r,sum=0;
    while(*n!=0)
    {
        r=(*n%10);
        sum=(sum*10)+r;
        *n=(*n/10);
    }
    if(temp==sum)
    printf("number is a palindrome number");
    else
    printf("not a palindrome number:");
    return 0;
}

