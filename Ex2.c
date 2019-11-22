#include<stdio.h)
int main()
{
    unsigned int n = 0,max;
    int i = 0;
    char ch;
    while(1)
    {
        ch = getchar();
        if('0'<=ch&&ch<='9')
        {
            n = n*10+ch-'0';
        }
        else
        {
            if(i==1||max<n)max=n;
            i++;
            n=0;
        }
        if(ch=='\n')break;
    }
    printf("The max is %u\n",max);
return 0;
}