// array stl using


#include<iostream>
/*
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
  //  int n=a.size();
   // for(int i=0;i<n;i++){
   //     cout<<a[i]<<endl;
  //  }
   // cout<<"element at index 2 :"<<a.at(2)<<endl;
    cout<<"empty array"<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.max_size();
}
*/


//                vector stl




#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int> a(5,2);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"capacity : "<<v.capacity()<<endl;
     v.push_back(4);
     v.push_back(3);
         cout<<"capacity : "<<v.capacity()<<endl;
             cout<<"size : "<<v.size()<<endl;
                 cout<<"index at 2 : "<<v.at(2)<<endl;
                     cout<<"front: "<<v.front()<<endl;
                         cout<<"back : "<<v.back()<<endl;
                         cout<<"before pop"<<endl;
                         for( int i:v){
                            cout<<i<<" ";
                            
                         }
                         cout<<endl;
                         v.pop_back();
                         cout<<"afterpop"<<endl;
                         for( int i:v){
                            cout<<i<<" ";
                            
                         }
                         cout<<endl;
                         cout<<v.size()<<endl;
                         v.clear();
                          cout<<v.size()<<endl;


                         







}