#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
    n=4
    1
    10
    101
    1010
    */

 /*   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }*/

    /*
    n==5

    *****
    *   *
    *   *
    *   *
    *****
    */
    
    
/*    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1||j==n||i==1||i==n){
            cout<<"*";

        }
        else{
            cout<<" ";
        }

    }
    cout<<endl;
   }*/
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1||j==(n/2)+1||j==n||i==1||i==n){
            cout<<"*";

        }
        else{
            cout<<" ";
        }

    }
    cout<<endl;
   }
    return 0;
}