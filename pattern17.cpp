#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;}
            int k=1;
            while(k<=i){
                cout<<"*";
                k++;
            }
            int l=1;
            while(l<=i-1){
                cout<<"*";
                l++;
            }
        
        cout<<endl;
        i++;
    }
}