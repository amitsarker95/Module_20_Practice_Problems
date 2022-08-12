#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *arr,int value,int low,int high)
{

    if(low<=high)
    {
        int mid =(low+high)/2;
        if(value==arr[mid])
        {
            return mid;
        }
        else if(value>arr[mid])
        {
            binarySearch(arr,value,mid+1,high);
        }
        else
        {
            binarySearch(arr,value,low,mid-1);
        }

    }
    else
    {

        return -1;
    }




}

int main()
{
    int n,value;
    cin>>n>>value;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

        int index = binarySearch(arr,value,0,n-1);

        if(index != -1)
        {
            cout<<index+1<<endl;
        }
        else
        {
            cout<<"Value is not found"<<endl;

        }


    return 0;
}
