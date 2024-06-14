#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[100],i,n,t,p,mindex,max;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

    for(p=0;p<n;p++)
    {
        max=a[p];
        mindex=p; 
        for(i=p+1;i<n;i++)
        {
            if(a[i]<max)
            {
             max=a[i];
             mindex=i;
            }
        }
         t=a[p];
        a[p]=max;
        a[mindex]=t;
    }
    printf("\n");
     for(i=0;i<n;i++)
     printf("%d ",a[i]);
}     