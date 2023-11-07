#include<stdio.h>
int linearsearch(int arr[],int size,int key)
{
    for (int  i = 0; i < size; i++)
    {
        if(arr[i]== key)
        {
            return i;//element found,return its index
        }
    }
    return -1;//elements not found
}
int main()
{
    
    int arr[]={12,34,78,91,123,456};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=91;
    int result=linearsearch(arr,size,key);
    if( result !=-1)
    {
        printf("element found at index %d\n",result);
    }
    else
    {
        printf("element not found in the array\n");
   }
   return 0;
}