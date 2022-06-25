#include<stdio.h>
int main()
{
    int n,a,b,c,submit=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int count=0;
      scanf("%d %d %d",&a,&b,&c) ;
      if(a==1)
      count++;
      if(b==1)
      count++;
      if(c==1)
      count++;
      if(count>=2)
      submit++;
    }
    printf("%d",submit);
}
