//lecture 5
//functions
#include<iostream>
using namespace std;
 /*int  printhello(){
    cout<<"hello bhai!"<<endl;
 
 return 3;
 }
int main(){
    cout<<printhello()<<endl;
    return 0;
}*/

//sum of 2 numbers
/*int sum(int a,int b){
    int s=a+b;
    return s;
}
int  main(){
    cout<<sum(5,10);
    cout<<endl;
    cout<<sum(10,56);
}*/

 //sumof 1 to n
 /* int sumN(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        }
        return sum;
    }

  int main(){
    cout<<sumN(10)<<endl;;
    cout<<sumN(5);
    return 0;

     
  }*/


 //calculate n factorial
 /*int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
            }
            return fact;
 }
 int main(){
    cout<<factorial(5)<<endl;
    cout<<factorial(10)<<endl;
    return 0;
 }*/
/*
int sum(int n){
   int  s=0;
    while(n>0){
    int lastdigit=n%10;
    n=n/10;
    s=s+lastdigit;
   }
   return s;
}
int main(){
    cout<<sum(145)<<endl;
        cout<<sum(12345)<<endl;
    cout<<sum(125)<<endl;

    return 0;
}
*/

//ncr
//n!/(r!*(n-r)!)
/*
int factorial(int n){
    int fact=1;
     for(int i=1;i<=n;i++){
        fact=fact*i;
             }
             return fact;
}
int ncr(int n,int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
   return  fact_n/(fact_r*fact_nmr);

}
int main(){
int n=10, r=1;
cout<<ncr(n,r)<<endl;
return 0;
}
*/
        
//prime or not
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (isPrime(number)) {
        cout << number << " is a prime number.";
    } else {
        cout << number << " is not a prime number.";
    }
    return 0;
}