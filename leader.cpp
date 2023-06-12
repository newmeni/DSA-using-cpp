//printing leadewrs of an array
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;

    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
int lar=0;
    for(int i=0;i<a;i++){
        for(int b=i;b<a;b++){
                if(array[b]>lar){
                    lar = array[b];
                }}


        if(array[i]==lar){
             cout<<array[i]<<" "; 

            }
    }
    return 0;
}
