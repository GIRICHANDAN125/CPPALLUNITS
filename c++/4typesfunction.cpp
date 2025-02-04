////// 4 proto types function like void or int return tyoe without return.


#include<iostream>
using namespace std;
class data{
    int a,b;
    public:
    void in(int a1,int b1)/////fun1
    {
        cout<<a1*b1;

    }
    int in1(int a11,int b11)////fun2
    {
        return (a11*b11);
    }
    void in2(void)/////fun3
    {
        cin>>a>>b;
        cout<<a*b<<endl;
    }
    int in3()/////fun4
    {
        cin>>a>>b;
        return (a*b);
    }

}d1;
int main(){
    d1.in(2,2);///fun1
    int res =d1.in1(2,3);
    cout<<res<<endl;
    d1.in2();///fun3 call
    cout<<d1.in3();//fun4 call

}