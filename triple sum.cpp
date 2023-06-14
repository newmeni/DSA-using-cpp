//find all the distinct triplets present in array which adds up to S
#include <bits/stdc++.h>
using namespace std;
void triplesum(int n,int a[], int s){
for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==s){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }         
             }
        }
    }
}
int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    triplesum(n,a,s);
    return 0;
    }