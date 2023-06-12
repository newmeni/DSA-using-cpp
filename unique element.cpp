//an array having 'a' elements,is an odd number, having every element twice except one, print the number which is unique
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    for(int i=0;i<a;i++){
        int j=0;
        while(j<a){
          if(i!=j && ar[i]==ar[j]){
            break;
          }
           j++;

        }
        if(j==a){
            cout<<ar[i]<<endl;
        }

    }
    return 0;
    
}
