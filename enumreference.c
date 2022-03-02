#include<stdio.h>
int funcheck(int *num);

enum check{no,yes};//enum default to set 0,1 so no=1,yes=1

int main()
{
    int num,result;
    printf("enter the number:");
    scanf("%d",&num);
    result=funcheck(&num);
    if(result==no)
    printf("The given number is odd\n");
    else
    printf("The given number is even\n");
}
int funcheck(int *num)
{
    if(*num%2==no)
    return yes;
    else
    return no;
}

