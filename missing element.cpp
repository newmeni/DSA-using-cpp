//you are guven an array of siz n-1, having numbers from 1 to n, with a missing number, find that
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
int ans=0;
    for(int i=0;i<n-1;i++){
        ans=ans^a[i];
    }
for(int i=1;i<=n;i++){
    ans=ans^i;
}
cout<<ans<<endl;
return 0;
}