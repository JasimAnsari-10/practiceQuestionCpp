#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"enter year: ";
    cin>>year;
    if(year%400==0 && year%100==0 && year%4==0){
        cout<<year<<" is leap year";
    }
    else if(year%400!=0 && year%100==0 && year%4==0){
        cout<<year<<" is not leap year";
    }
    else if(year%400!=0 && year%100!=0 && year%4==0){
        cout<<year<<" is leap year";
    }
    else {
        cout<<"is not leap year";
    }
    return 0;
}