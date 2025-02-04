// #include<iostream>
// using namespace std;
// class pen
// {private:
//     static int count;
//     public:

//     void out();///non inline    
// };
// int pen::count=1000;
// void pen::out()
// {
//     cout<<++count;
// }
// int main(){
//     class pen p1,p2,p3;
//     p1.out();
//     p2.out();
//     p3.out(); 

// }
///// 2 one 
#include<iostream>
using namespace std;
class car 
{
    static int cost;
    char comp[20];
    public:
    void in(){
        cin>>comp;

    }
    static void process()
    {
        cout<<cost<<endl;
    }
};
int car::cost=100000;
int main(){
    class car c1;
    c1.in();
    car::process();

}