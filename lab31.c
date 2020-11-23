#include <stdio.h>
#define N 10
int main()
{
    char s[N],d[N];
    int i ;
        scanf  ("%s",s);
    for (i=0;i<N;i++)
    {
        printf("%c",s[i]);
    }
    for (i=0;i<N;i++)
    {
        d[i]=s[i];
        //printf("%c\n",d[i]);
    }
    for (i=0;i<N;i++)
    {
        s[i]=d[N-1-i];
        printf("%c\n",s[i]);
    }
    for (i=0;i<N;i++)
    {
        printf("%c",s[i]);
    }
}