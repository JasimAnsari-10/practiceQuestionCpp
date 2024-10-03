// #include<iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout<<"enter the value of a = ";
//     cin>>a;
//     cout<<"enter the value of b = ";
//     cin>>b;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"after swapping: a = " <<a << " & " <<"b = "<<b;
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a = ";
    cin>>a;
    cout<<"enter the value of b = ";
    cin>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after swapping: a = " <<a << " & " <<"b = "<<b;
    return 0;
}