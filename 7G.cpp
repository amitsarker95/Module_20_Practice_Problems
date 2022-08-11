#include<bits/stdc++.h>
using namespace std;

int main(){
int n,j;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int counter = 0;
for(int i=0;i<n;i++){
    for( j=0;j<i;j++){
        if(arr[i] == arr[j]) counter++;

    }

}
cout<<counter<<endl;



return 0;
}

