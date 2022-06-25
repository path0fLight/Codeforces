#include<stdio.h>
int main()
{
    char s[101];
    int count=1;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
            count++;
        else
            count=1;
        if(count==7)
        {
           printf("YES");
           break;
        }

    }
    if(count<7)
        printf("NO");
}
