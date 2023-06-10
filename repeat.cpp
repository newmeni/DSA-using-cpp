#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    int ARR[n];
    for(int i=0;i<n;i++){
        cin>>ARR[i];
    }

    int i=0;

    for(int j=0;j>n;j++){
        if(ARR[i]=ARR[j]){
            cout<<ARR[i]<<endl;
        }
        i++;
}
    
return 0;


}