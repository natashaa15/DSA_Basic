#include<iostream>
#include<math.h>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int c,d;
    cin>>c>>d;
    int answer=power(c,d);
    cout<<answer;
    return 0;
}