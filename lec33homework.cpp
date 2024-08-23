#include<iostream>
using namespace std;
int sum(int arr[],int size){

    //base
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    //rr
  //   int remainingPart = ;
   // int sum = arr[0] + remainingPart;
    return  sum(arr+1, size-1)+arr[0];

}
 

int main(){
    int arr[5]={3,12,5,10,6};
    int size =5;
    int summ=sum(arr,size);
    cout<<summ<<endl;
     
    return 0;
}