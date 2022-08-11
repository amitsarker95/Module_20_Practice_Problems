#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i] == k){
        cout<<i+1<<endl;
        break;
    }

}




return 0;
}
