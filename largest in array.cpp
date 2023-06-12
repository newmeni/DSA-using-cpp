//print largest in array
#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;

int ar[n];
for(int i=0;i<n;i++){
    cin>> ar[i];
}

int largest=0;

for(int i=0;i<n;i++){
    if(ar[i]> largest){
        largest = ar[i];
    }
}

cout<< largest <<endl;

return 0;
}
