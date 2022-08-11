#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    int sum = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
            if(i%2==0 && j%2!=0 )
            {
                    sum += arr[i][j];
            }
        }
    }


    cout<<sum<<endl;


        return 0;
}
