#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
    struct emp
    {
        int eno;char ename[10];
    }e[100],t;
    int i=0,n,p;
    FILE *f1;
    f1=fopen("emp.txt","r");
    if(f1==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    while(!feof(f1))
    {
        fscanf(f1,"%d %s",&e[i].eno,&e[i].ename);
        i++;
    }n=i;
    for(p=1;p<n;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(strcmp(e[i].ename,e[i+1].ename)>0)
            {
                t=e[i];
                e[i]=e[i+1];
                e[i+1]=t;
            }
        }
    }
    printf("\n Emp info in order:\n");
    for(i=0;i<n;i++)
    printf("\nEno=%d  Name=%s",e[i].eno,e[i].ename);
}