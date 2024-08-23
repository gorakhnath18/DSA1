#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    //base
    if(size==0||size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else{
         return issorted(arr+1,size-1);
    }

}

int main(){
    int arr[5]={5,6,7,8,9};
    int size =5;
    bool ans= issorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}