#include <stdio.h>
int areaofrectangle(int *l,int *w);


int main()
{
    int l,w,ar;
    printf("enter the lenth and width:");
    scanf("%d %d",&l,&w);
    ar=areaofrectangle(&l,&w);
    printf("Area of a rectangle:%d",ar);
}

int areaofrectangle(int *l,int *w)
{
    int ar;
    ar=*(l)* *(w);
    //printf("Area of a rectangle:%d",ar);
    return ar;
}

