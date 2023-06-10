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
for(int i=1;i<a;i++){
    ans=ans^i;
}
cout << ans<<endl;

return 0;
}