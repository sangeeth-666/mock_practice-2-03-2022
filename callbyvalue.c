#include <stdio.h>
int swap(int a,int b)
{
    int result;
    int temp=a;
    a=b;
    b=temp;
    printf("After swaping a and b values:%d %d",a,b);
    //return result;
}


int main()
{
    int a,b,result;
    printf("enter the a and b values:");
    scanf("%d %d",&a,&b);
    result=swap(a,b);
    printf("After swaping values:%d %d ",a,b);
}

