#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int a1[a];
    for(int i=0;i<a;i++){
        cin>>a1[i];
    }

    int a2[b];
    for(int i=0;i<b;i++){
        cin>>a2[i];
    }
    for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(a1[i]==a2[j]){
            cout<<a1[i]<<" ";
            a2[j]=-2;
        }
    }
}
return 0;
}
