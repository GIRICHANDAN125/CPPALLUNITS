
// #include<iostream>
// using namespace std;
// template<class a,class b, class c= int>
// class d{
//     a a1;
//     b b1;
//     c c1;
//     public:
//     void in (){
//         cout<<sizeof(a1)<<" "<<sizeof(b1)<<sizeof(c1);
//     }
// };
// int main(){
//     d<int,float> d1;
//     d1.in();
//     return 0;
// }




// #include<iostream>
// using namespace std;
// template<class t>
// class mypair{
//     t a,b;
//     public:
//     mypair (t first, t second){
//         a = first;
//         b = second;

//         }
//         t getmax();
// };
// template <class t>
// t mypair<t>::getmax(){
//     t retval;
//     retval -a>b?a:b;
//     return retval;
// }
// int main(){
//     mypair<int> myobject(100,75);
//     cout<<myobject.getmax()<<endl;
    
// }






#include<iostream>
using namespace std;
template<class t>
class mypair{
    t a,b;
    public:
    mypair (t first, t second){
        a = first;
        b = second;

        }
        t getmax();
};
template <class t>
t mypair<t>::getmax(){
    t retval;
    retval -a>b?a:b;
    return retval;
}
int main(){
    mypair<int> myobject(100,75);
    cout<<myobject.getmax()<<endl;
    
}



#include<iostream>
using namespace std;

template<class t>
class mypair {
    t a, b;
public:
    mypair(t first, t second) {
        a = first;
        b = second;
    }

    t getmax();
};

template <class t>
t mypair<t>::getmax() {
    t retval;
    retval = (a > b) ? a : b;  
    return retval;
}

int main() {
    mypair<int> myobject(100, 75);
    cout << myobject.getmax() << endl;
    return 0;
}
