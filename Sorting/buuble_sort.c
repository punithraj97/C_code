#include<stdio.h>


#define MAX 10

int array[10]={1,2,3,4,5,6,7,8,9,10};

int main()
{
   
   printf("before sorting\n");
   
   
    for(int i=0;i<MAX;i++)
    {
        printf("%d,",array[i]);
    }
       printf("\n");

    for(int i=0;i<MAX;i++)
    {
        for(int j=i+1;j<MAX;j++)
        {
            if(array[i]<array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }
    }
   printf("after decending sort\n");

    for(int i=0;i<MAX;i++)
    {
        printf("%d,",array[i]);
    }
   printf("\n");

    return 0;
}