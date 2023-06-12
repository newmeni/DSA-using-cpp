//printing address of every int in array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        printf("adress of %d : %x\n",i,a+i);
    }
//if 'a'represents gautham nagar, then a[0] represents a house 
    return 0;
}
