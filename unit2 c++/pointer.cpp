// #include<iostream>
// using namespace std;
// int main(){
//     int *a,b=100;
//     float *c,n=23.45;
//     char *d,m='t';
//     a=&b;   ////// *a=*&b=b
//     c=&n;
//     d=&m;
//     cout<<*a<<endl<<*c<<endl<<*d<<endl;

// }

/// ptr to ptr
// #include<iostream>
// using namespace std;
// int main(){
//     int a,*b,**c,***d;
//     a=23;
//     b=&a;
//     c=&b;
//     d=&c;
//     cout<<a<<endl<<*b<<endl<<*c<<endl<<***d<<endl;
//     return 0;
// }



///ptr arthematic
#include<iostream>
using namespace std;
int main(){
    int a;
    int *p=&a;

    float d;
    float *r=&d;
    cout<<p<<endl<<endl<<r<<endl;
    cout<<++p<<endl<<endl<<r--<<endl;
}