#include <stdio.h>
void main ()
{
    int i,j,size,temp=0;
    int a[10];
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter array elemnts");
    
    
    
    // Ascending order bubble sort
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    
    printf("Sorted array elements in ascending order are :\n");
    for(i=0;i<size;i++)
    {
        printf("\t\t%d",a[i+1]);
    }
    
    
    // Descending order Bubble sort
    
    for(i=0;i<size;i++)
    {
        for(j=size;j>0+i;j--)
        {
            if(a[j]>a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                
            }
        }
    }
    
    printf("Sorted array elements in descending order are :\n");
    for(i=1;i<=size;i++)
    {
        printf("\t\t%d",a[i-1]);
    }
    
    
}
