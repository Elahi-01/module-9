#include<stdio.h>

int main()
{
    int n,i,pos;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    scanf("%d %d",&pos,&d);
    for(i=n;i>=pos+1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=d;
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
        printf("%d\n",i);
    }
    return 0;
}