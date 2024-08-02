#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int count =0;
    while(i<=n){
        int j=1;
        while(j<=i){
            count=count+1;

            cout<<count;
            j++;
        }
        cout<<endl;
        i++;
    }
}