#include<stdio.h>
int main()
{
    char p[101];
    gets(p);
    int count=0;
    for(int i=0;p[i]!='\0';i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            printf("YES");
            count++;
            break;
        }
    }
    if(count==0)
        printf("NO");
}
