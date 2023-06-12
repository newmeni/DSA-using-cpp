//Xor of consecutive elements in array
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
int ans=0;
    for(int i=0;i<a;i++){
        ans= array[i]^array[i+1];
        cout<<ans<<" ";

    }
    return 0;
    }
