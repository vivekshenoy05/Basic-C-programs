#include<stdio.h>
int sum_of(int x,int y);
void main()
{
    int x,y,result;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    result=sum_of(x,y);
    printf("sum is:%d + %d= %d",x,y,result);
}

int sum_of(int x,int y)
{
    x+=y;
    return(x);
}