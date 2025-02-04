// #include<iostream>
// using namespace std;
// class x{
//     public:
//     int a;
//     void f(int b){
//         cout<<" the value of b is:"<<b<<endl;
//     }
// };

// int main(){
//     int x::*ptiptr =&x::a;//// declare ptr to datat member
//     void(x::* ptfptr)(int)=&x::f;//// declare ptr to  member function
//     x xobject;///create object of class type x
//     xobject.*ptiptr =10;
//     cout<<"the value of a is"<<xobject.*ptiptr<<endl;
//     (xobject.*ptfptr)(20);
// }

//// int to float
// #include<iostream>
// using namespace std;
// class x{
//     public:
//     float a;
//     void f(float b){
//         cout<<" the value of b is:"<<b<<endl;
//     }
// };

// int main(){
//     float x::*ptiptr =&x::a;//// declare ptr to datat member
//     void(x::* ptfptr)(float)=&x::f;//// declare ptr to  member function
//     x xobject;///create object of class type x
//     xobject.*ptiptr =10.44;
//     cout<<"the value of a is"<<xobject.*ptiptr<<endl;
//     (xobject.*ptfptr)(20.383);
// }

/// this ptr 

#include<iostream>
using namespace std;
class student{
    char name[20];
    float cgpa;
    public:
    void take();
    void out();
}s1;
void student::take(){
    cin>>this->name>>cgpa;;
}

void student::out(){

    cout<<this->name<<endl<<this->cgpa<<endl;
}
int main(){
    student s1[5];//array of size
    int i;
    for(i=0;i<5;i++){
    s1[i].take();
}
for(i=0;i<5;i++){
    s1[i].out();
}
}

