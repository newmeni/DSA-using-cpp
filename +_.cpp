//given 3 numbers, check if 3rd number is sum of the two numbers if yes, print + or if difference print -
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"+"<<endl;
    }
    else if (a-b==c){
        cout<<"-"<<endl;
    }
    return 0;
}
