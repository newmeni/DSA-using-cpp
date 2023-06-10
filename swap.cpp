#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
int a=0;
    while(a+1<n){
        swap(ar[a],ar[a+1]);
        a=a+2;
    }

for(int i=0;i<n;i++){
     cout<<ar[i]<<" ";
}

   
   return 0;
}