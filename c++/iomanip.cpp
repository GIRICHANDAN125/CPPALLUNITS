#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float b = 2.335678;
    string s1 ="amman";
    int c= 23;
    cout<<"hello world"<<endl;
    cout<<"next line"<<endl;
    int a=20;
    cout<<hex<<a<<endl;
    cout<<oct<<a<<endl;
    cout<<dec<<a<<endl;
    cout<<setbase(6)<<fixed<<a<<endl;
    cout<<setw(5)<<a<<endl;
    cout<<setw(5)<<setfill('*')<<a<<endl;
    cout<<setprecision(5)<<b<<endl;
    cout<< s1<< endl;
    cout<<"ok"<<endl;
    cout<<setbase(10)<<c<<endl;
    cout<<c;
    return 0;
}