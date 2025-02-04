// #include<iostream>
// using namespace std;

// class Solution {
//     public:
//     void in(){
//         cout<<"In base class"<<endl;
//     }


// };
// class two::public one
// {
//     public:
//     void in(){
//         cout<<"In drivide class one"<<endl;
//     }
// };


// creating a class and enter dynamic float array as data member.
// use memberfun for input the array.
// write a member fubn to display the negative number entered in float array




// #include<iostream>
// using namespace std;
// class data{
//     float *p;
//     int n;
//     public:
//     void in(){
//         cin>>n;
//         p=new float[n];
//         for(int i=0;i<n;i++){
//             cin>>p[i];
//         }

//     }
//     void process (){
//         cout<<"Negative numbers in array are : ";
//         for(int i=0;i<n;i++){
//             if(p[i]<0){
//                 cout<<p[i]<<" ";
//             }
//         }
//         delete []p;

//     }

// };
// int main(){
//     data obj;
//     obj.in();
//     obj.process();
//     return 0;

// }



#include<iostream>
using namespace std;
class shape {
    protected:
    float radius;
    float side;
};
class circle:public shape {
    public:
    void area() {
        cin>>radius;
        cout<<(3.14*radius*radius)<<endl;
    }
};
class square:public shape {
    public:
    void area() {
        cin>>side;
        cout<<(side*side)<<endl;
    }
};
int main() {
    class shape *s;
    class circle c1;
    class square s1;
    c1.area();
    s1.area();
}









