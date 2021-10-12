#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,max,loc,t;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n-1;j++)
    {
        max=a[j];
        loc=j;
        for(k=j+1;k<n;k++)
        {
            if(max<a[k])
            {
		    	max=a[k];
                loc=k;
            }
        }
        t=a[j];
        a[j]=a[loc];
        a[loc]=t;
    }
    for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
    return 0;
}