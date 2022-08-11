#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        for(k=2; k<i; k++)
        {
            if(i%k == 0)
            {
                break;
            }
        }
        if(k==i){
          cout<<k<<" ";
        }
    }



    return 0;
}
