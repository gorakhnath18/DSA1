#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(islower(ch)){
        cout<<"lowercase"<<endl;
    }
    else if(isupper(ch)){
        cout<<"uppercase"<<endl;
    }
    else{
        cout<<"numeric"<<endl;
    }
}