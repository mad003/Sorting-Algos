#include<iostream>
using namespace std;

void counting(int arr[],int n)
{
    int k=arr[0];
    int b[n];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>k)
            k=arr[i];
    }
    int c[k+1]={0};
    for(int i=0;i<n;i++)
    {
        c[arr[i]]++;
    }
    for(int i=1;i<k+1;i++)
        c[i]=c[i]+c[i-1];
    for(int i=0;i<n;i++)
    {
        c[arr[i]]--;
        b[c[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    counting(arr,n);
    return 0;
}
