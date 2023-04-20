#include<stdio.h>

int main()
{
    int n,i,pos;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
        //printf("%d\n",i);
    }
    return 0;
}