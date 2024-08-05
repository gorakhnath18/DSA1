#include<iostream>
using namespace std;
 void array(int arr[],int size){
    int i;
    for( i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


 }
 int main(){
    int brr[15]={2,2,15,1,52,4,24,12};
    int n=15;
    array(brr,15);
    int a =sizeof(brr)/sizeof(int);
    cout<< a;


 }