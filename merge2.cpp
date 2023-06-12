//merging of two arrays
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int ar1[m];
    for(int i=0;i<m;i++){
        cin>>ar1[i];
    }

    int n;
    cin>>n;
    int ar2[n];
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }

    int ar3[m+n];
    for(int i=0;i<m;i++){
        ar3[i]=ar1[i];
    }

    for(int i=0;i<n;i++){
        ar3[m+i]=ar2[i];

    }

    sort(ar3,ar3+m+n);
    for(int a=0;a<m+n;a++){
        cout<<ar3[a]<<" ";
    }

    cout<<ar3[5]<<endl;
    

return 0;

}
