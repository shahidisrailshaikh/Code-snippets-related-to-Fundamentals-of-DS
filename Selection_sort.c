#include <stdio.h>
void main ()
{
    int i,j,k,size,temp=0;
    int a[10];
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter array elemnts");
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            printf("\nSorted elements after pass %d are\n",j);
            {
               
                printf("\t\t%d",a[k]);
            }
        }
        
   
    }
    
    printf("\nSorted array elements in ascending order are :\n");
    for(i=0;i<size;i++)
    {
        printf("\t\t%d",a[i]);
    }
}
