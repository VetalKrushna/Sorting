#include<string.h>
#include<stdio.h>
int main()
{
    struct student
    {
        int rno;char name[20];float per;
    }s[10],t;
    int i,n,p;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter rno name per:");
        scanf("%d%s%f",&s[i].rno,&s[i].name,&s[i].per);
    }
    for(p=1;p<n;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(strcmp(s[i].name,s[i+1].name)>0)
            {
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }
    }
    printf("\n Student Info:");
    for(i=0;i<n;i++)
     printf("\n%d\t%s\t%f",s[i].rno,s[i].name,s[i].per);
}
