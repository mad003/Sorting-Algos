#include<bits/stdc++.h>
using namespace std;

int merge1(int *arr,int i,int j,int *link)
{
    int k=0;
    while((i!=0) and (j!=0))
    {
        if(arr[i]<=arr[j])
        {
            link[k]=i;
            k=i;
            i=link[i];
        }
        else
        {
            link[k]=j;
            k=j;
            j=link[j];
        }
    }
    if(i==0)
        link[k]=j;
    else 
        link[k]=i;
    for(int i=0;i<=8;i++)
        cout<<link[i]<<" ";
    cout<<endl;
    return link[0];

}

int mergesort(int *arr,int i,int j,int *link)
{
    int x=i,p=i,q=j;
    if(i<j)
    {
        int mid=(i+j)/2;
        p=mergesort(arr,i,mid,link);
        q=mergesort(arr,mid+1,j,link);
        x=merge1(arr,p,q,link);
    }
    return x;
}

int main()
{
    int arr[]={0,50,10,25,30,15,70,35,55};
    int link[]={0,0,0,0,0,0,0,0,0};
    int n=8;
    int p=mergesort(arr,1,8,link);
    cout<<p;
    return 0;
}