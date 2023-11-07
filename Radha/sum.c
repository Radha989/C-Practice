#include<stdio.h>
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
int x,y;
printf("\n enter the value of x and y:");
scanf("%d%d",&x,&y);
int k=sum(x,y);
printf("\n sum of two numbers:%d",k);
return 0;

}