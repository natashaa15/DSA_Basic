//Print a negative number to binary
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int ans=0;
    int i=0;
    int n;
    cin>>n;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    ans=~(ans);
    int binary=ans+1;
    cout<<"The binary for of a negative decimal is\t"<<binary;
    return 0;
}