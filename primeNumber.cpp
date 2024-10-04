#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cout<<"enter number: ";
    cin>>n;
    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"no is prime";
    }else {
        cout<<"no is not prime";
    }
    return 0;
}