#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=2; i<=n-1;i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"number is prime"<<endl;
    } else {
        cout<< "number is non-prime"<<endl;
    }
    return 0;
}