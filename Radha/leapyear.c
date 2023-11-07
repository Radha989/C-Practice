#include<stdio.h>
int leap_year(int a)
{
    if(a%4==0)
    {
        if(a%100==0)
        {
            printf("\n not a leap year");
        }
        else
        {
            printf("\n it is a leap year");
        }
    }
    else if(a%400==0)
    {
        printf("\n it is a leap year");
    }
    else
    printf("\n not a leap year");
    return 0;
    }
int main()
{
    int year;
    printf("\n enter a year:");
    scanf("%d",&year);
    int k=leap_year(year);
}