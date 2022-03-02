#include <stdio.h>
int fabinacci(int n);

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("Fibbonacci series:\n");
    fabinacci(n);
}
int fabinacci(int n)
{
    int t1=0,t2=1,nextterm;
    for(t2=1;t1<=n;)
    {
        printf("%d\t",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}

