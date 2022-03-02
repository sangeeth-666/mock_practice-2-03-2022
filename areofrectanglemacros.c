#include <stdio.h>
#define areaofrectangle(l,w) (l*w);


int main()
{
    int l,w,ar;
    printf("enter the length and width:");
    scanf("%d %d",&l,&w);
    ar=areaofrectangle(l,w);
    printf("Area of a rectangle:%d",ar);
}


