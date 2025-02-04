#include<iostream>
using namespace std;
class data
{
    float a;////private
    public:
    void in() ////inline function
    {
        cin>>a;

    }
    friend void fun(data); ///prototypes forfriend
    friend void fun1(data); ///prototypes forfriend

};

void fun(data d1)
{
    cout<<d1.a*9.5<<endl;

}
void fun1(data d)
{
    cout<<d.a+0.1<<endl;
}
int main()
{
    data d;
    d.in();
    fun(d);/// friend fun called here
    fun1(d);/// friend fun called here
    return 0;
}