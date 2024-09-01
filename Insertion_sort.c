#include <stdio.h>
void main ()
{
    int i,j,k,size,temp;
    int a[10];
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter array elemnts");
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
          if(a[j]>a[i])
          {
             temp=a[j];
             a[j]=a[i];
             for(k=i;k>j;k--)
             {
                 a[k]=a[k-1];
             }
             a[k+1]=temp;
          }
        }
    }
    
    printf("Sorted array elements in ascending order are :\n");
    for(i=0;i<size;i++)
    {
        printf("\t\t%d",a[i]);
    }
}


