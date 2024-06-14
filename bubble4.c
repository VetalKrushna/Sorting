#include<stdio.h>
int main()
{
    struct stud
    {
        int rno;
        char name[20];
        float per;
    }s[100],t;
    int i,n,p;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Rollno Name Percent:");
        scanf("%d%s%f",&s[i].rno,&s[i].name,&s[i].per);
    }
    for(p=1;p<n;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(s[i].per<s[i+1].per)
             {
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
             }   
        }
    }
     for(i=0;i<n;i++)
    {
        printf("\nEnter Rollno Name Percent:%d  %s  %2.2f",s[i].rno,s[i].name,s[i].per);
    }
}