#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }

     return 1;
}

int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<"Number is even";

    }
    else{
        cout<<"Number is odd";
    
    }
    return 0;
}