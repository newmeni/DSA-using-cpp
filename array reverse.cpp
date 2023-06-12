//reversing numbers in an array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    //for(int a=0;a<n;a++){
      //  int b=ar[a];
        //int c= ar[n-1-a];
        //ar[a]=c;
      //  ar[n-1-a]=b;
    //}
    int s= 0;
    int e = n-1;

    while(s<e){
        swap( ar[s],ar[e]);
        s++;
        e--;
    }
    
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}
