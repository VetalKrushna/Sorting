#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[100],i,n,t,p;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10;
    } 
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    for(p=1;p<n;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}