#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0)
    return 1;
    //int a=power(n-1);
   // int b=2*a;
    return 2*power(n-1);

}

int main(){
    int n;
    cin>>n;
    int ans= power(n);
    cout<<ans<<endl;
    return 0;
}