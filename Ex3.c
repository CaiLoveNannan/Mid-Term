#include<stdio.h>
int main()
{
    unsigned   long   int a   =   1;
    unsigned   long   int c   =   0;
    int b   =   0;
    while   (a > 0)
    {
        a=a<<1;
        b=b+1;
    }
    printf("max=%u,min=%u\n",a-1,b);
}     