
//Problem Link - Cyclic sort
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

//Algorithmic approach to Cyclic sort

void fun(int *arr,int n)
{
  int i = 0;
  while(i < n)
  {
    if(arr[i] != arr[arr[i] - 1])
      swap(arr[i],arr[arr[i]-1]);

    else 
      i++;
  }
  return;
}

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n;
  cin>>n;
  int arr[n];
  
  // input must be from [1,n] only 
  for (int i = 0; i < n; i++)
    cin>>arr[i];
  

  fun(arr,n);

  //after sorting 
  for (int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  return 0;
}