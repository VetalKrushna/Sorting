#include<string.h>
#include<stdio.h>
int main()
{
    int i,n,p;
    char s[10][10],t[10];
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter name=");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    for(p=1;p<n;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(strcmp(s[i],s[i+1])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[i+1]);
                strcpy(s[i+1],t);
            }
        }
    }
    printf("\n Name in order:");
    for(i=0;i<n;i++)
    printf("%s ",s[i]);
}