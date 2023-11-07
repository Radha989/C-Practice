#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    printf("\n %d is maximum",a);
    else
    printf("\n %d is maximum",b);
    return 0;
}
int main()
{
    int x,y;
    printf("\n enter value of x and y:");
    scanf("%d%d",&x,&y);
    int k=max(x,y);
    return 0;
}