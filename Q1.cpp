//Binary of a decimal number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    int i=0;
    cin>>n;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;

    }
    cout<<"The Binary Form of the Decimal is\t"<<ans;
    return 0;
}