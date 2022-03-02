//---swap using marcos----
#include <stdio.h>
#define swap(a,b,t) (t=a,a=b,b=t)

int main()
{
    int a,b,t,result;
    printf("enter the a and b values:");
    scanf("%d %d",&a,&b);
    result=swap(a,b,t);
    printf("After swaping values:%d %d ",a,b);
}

