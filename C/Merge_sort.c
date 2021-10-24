//Sort the given elements using merge sort

/*
Example :

 Enter the total number of elements : 6
 Enter the elements : 44 67 23 10 12 3
 Elements in sorted order : 3 10 12 23 44 67
*/

#include<stdio.h>
#include<stdlib.h>
int b[10];
void merge(int a[],int l,int mid,int r)
{
    int i,j,k,b[10];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid&&j<=r)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=r)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
     while(i<=mid)
     {
         b[k]=a[i];
         i++;
         k++;
     }
    }
    for(k=l;k<=r;k++)
        a[k]=b[k];
}
void merge_sort(int a[],int l,int r)
{ int mid,k;
  if(l<r)
  {
      mid=(l+r)/2;
      merge_sort(a,l,mid);
      merge_sort(a,mid+1,r);
      merge(a,l,mid,r);
  }
}
void main()
{
   int a[20],n,i;
    printf("\nEnter the total number of elements  :  ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    merge_sort(a,0,n-1);
    printf("\nElements in sorted order : ");
    for(i=0;i<n;i++)
       printf("%d\t",a[i]);
    printf("\n");
}
