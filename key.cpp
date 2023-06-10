#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,key;
    cin>>a>>key;

    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }

    cout<< ar[key]<<endl;

    return 0;
}