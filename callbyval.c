//----swap without using temp variable call by refernece---
#include<stdio.h>

int swap(int *a,int *b)
{
    
    *a=*(a)+*(b);
    *b=*(a)-*(b);
    *a=*(a)-*(b);
    //printf("After swaping values:%d %d",*a,*b);
    return 0;
}

int main()
{
    int a,b;
    printf("enter the a and b values:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swaping values:%d %d",a,b);
}

