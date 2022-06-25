#include<stdio.h>
int main()
{
    int n,a,b;
    int current=0,capacity=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        current=current-a+b;
        if(current>capacity)
            capacity=current;
    }
    printf("%d",capacity);
}
