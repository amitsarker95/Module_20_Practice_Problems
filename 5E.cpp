#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(arr[0]<0)
    {
        arr[0] = 0;
    }
    else
    {
        arr[0] = arr[0];
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i]<0) arr[i] = 0;
        else arr[i] = arr[i];

        arr[i] = arr[i] + arr[i-1];
    }
    int k,l,r;
    cin>>k;
    for(int i=0; i<k; i++)
    {
        cin>>l>>r;
        if(l==1)cout<<arr[r-1]<<endl;
        else cout<<arr[r-1]-arr[l-2]<<endl;
    }






    return 0;
}

