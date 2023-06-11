\\print the unique number , in an array, in which each elements repeats itself except one ele
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
