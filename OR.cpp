#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
int ans;
    for(int i=0;i<a;i++){
        ans= ar[i]|ar[i+1];
        cout<<ans<<" ";
    }
    return 0;
}