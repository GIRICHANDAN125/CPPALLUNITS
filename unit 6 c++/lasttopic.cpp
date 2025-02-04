// ambiquities in inheritance
// classname :: for all
// hybrid virtual base class 

// #include <iostream>
// using namespace std;
// class base {
//     public:
//     void in(){
//         int x;
//         cin>>x;
//         cout<<x;
//     }
// };
// class derived: public base {
//     int y;
//     public:
//     void in(){
//         cout<<" derived";
//         cin>>y;
//         cout<<y;
//     }
 };;
// int main(){
//     derived d;
//     d.in();
//     d.base::in();
//     return 0;
// }




// virtual base class





// #include<iostream>
// using namespace std;

// template<class t>
// class mypair {
//     t a, b;
//     int y;
// public:
//     mypair(t first, t second) {
//         a = first;
//         b = second;
//     }

//     t getmax();
// };
// class final:public virtual base {


// template <class t>
// t mypair<t>::getmax() {
//     t retval;
//     retval = (a > b) ? a : b;  
//     return retval;
// }
// }
// class final:public derived1,public derived2{
//     int w;
//     public:
//     void in3(){
//         cin>>w;
//     }
//     void process(){
//         cout<<x+y+z+w<<endl;
//     }
// };


// int main() {

// }


/// dynamic memeory

//binary operator overloading member
#include<iostream>
using namespace std;
class comp
{	float a,b;
	public:
		void in()
		{			cin>>a>>b;
		}
		void operator*(comp c1)
		{
			comp c3;
			c3.a=this->a*c1.a;
			c3.b=this->b*c1.b;
			cout<<c3.a<<" "<<c3.b;	
		}
};
int main()
{comp c5,c6;
c5.in();
c6.in();
c5*c6;
}