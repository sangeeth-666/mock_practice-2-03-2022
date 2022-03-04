#include <stdio.h>
#include<string.h>
int stringlength(char ch[20]);

int main()
{
    int len,length;
    char ch[20]="sangeeth";
    for(int i=0;ch[i]!='\0';i++)
    {
        printf("The each character of the string:%c\n",ch[i]);
    }
    printf("The string is:%s\n",ch);
    
    printf("Addres of a string:%p\n",ch);
    
    len=strlen(ch);
    printf("Length of a string:%d",len);
    length=stringlength(ch);
    printf("\nstring length:%d",length);
}
int stringlength(char ch[20])
{
    int length=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

