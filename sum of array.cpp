\\sum of the elements of an array
#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum=0;
for(int a=0;a<n;a++){
    sum=sum+arr[a];
}

cout<<sum<<endl;

return 0;
}
