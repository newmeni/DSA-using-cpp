//an array contains numbers from 1 to n-1 and one repeated number X, find x
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    
    int ans=0;
    for(int i=0;i<a;i++){
        ans=ans^ar[i];
    }
    cout << ans<<endl;

    return 0;
    
    }
