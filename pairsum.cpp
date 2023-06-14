//you are given an array, of size N, an integer S, task is to return the pair of elements whose sum is S
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(arr[i]+arr[j]==s){
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" "<<endl;
        }

    }
}
return 0;
}
