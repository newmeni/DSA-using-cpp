\\printing leadewrs of an array
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;

    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }

    for(int i =0;i<a;i++){
        int j;
        for( j = i+1; j<a;j++){
            if(array[i] <= array[j]){
               break;
            }    
        }
            if(j == a){
            cout<< array[i] << " " ;
        }
    }

}
