//-----swap without using temp variable call by value----

#include<stdio.h>

int swap(int a,int b)
{
    int result;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping values:%d %d",a,b);
    //return result;
}

int main()
{
    int a,b,result;
    printf("enter the a and b values:");
    scanf("%d %d",&a,&b);
    result=swap(&a,&b);
    //printf("After swaping values:%d",result);
}

