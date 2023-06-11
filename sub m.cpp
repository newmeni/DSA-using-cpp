\\print the sum and product of elements of an array and difference of both
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>> a;
    int sum = 0;
    int product= 1;

    while(a!=0){
        sum= sum+(a%10);
        product = product*(a%10);

        a=a/10;
    }

    int sub = product- sum;

    cout<<sum<<endl;
    cout<<product<<endl;
    cout<<sub<<endl;

    return 0;
}
