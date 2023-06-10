#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }

    sort(a,a+n);
    cout<<"min="<<a[0]<<" ";
    cout<<"max="<<a[n-1]<<endl;

    return 0;
}