#include<stdio.h>
int main()
{
    char ch;
    int chars = 0,words = 0;
    while(1)
    {
        ch = getchar();
        if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z'))
        {
            chars++
        }
        else
        {
           if(chars>0)
           {
            words++
            chars=0;
           }
           if(ch=='\n')break;
        }        
    }
    printf("%d\n",words);
    return 0;
}