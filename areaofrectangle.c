#include <stdio.h>


int main()
{
    int l,w,ar;
    printf("enter the lenth and width:");
    scanf("%d %d",&l,&w);
    ar=areaofrectangle(l,w);
    printf("Area of a rectangle:%d",ar);
}

int areaofrectangle(int l,int w)
{
    int ar;
    ar=length*width;
    printf("Area of a rectangle:%d",ar);
    return ar;
}

