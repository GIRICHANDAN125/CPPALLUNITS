// #include<iostream>
// using namespace std;
// void fun(int a,int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<b<<endl;
// }
// int main(){
//     int x,y;
//     cin >> x >> y; 
//     fun(x,y);
//     cout<<x<<endl<<y<<endl;

// }

/////2 address function

// #include<iostream>
// using namespace std;
// void fun(int *a,int *b){////a =&x ,b =&y
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     cout<<a<<b<<endl;
// }
// int main(){
//     int x,y;
//     cin >> x >> y;
//     fun(&x,&y);
//     cout<<x<<endl<<y<<endl;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     float *a,b=2.34;
//     int *c,d=20;
//     a=&b;
//     c=&d;
//     cout<<*c<<endl<<*a<<endl;
//     return 0;
// }

////3 reference function
// #include<iostream>
// using namespace std;
// int main(){
//     int x =200;
//     int &y = x;
//     int &z = y;
//     z=500; /////////////
//     cout<<x<<endl<<y<<endl<<z<<endl;

// }


///// factorial code

// #include<iostream>
// using namespace std;
// long int fac(int x){
//     if(x>1){
//         return x*fac(x-1);///4*3*2*1
//     }
//     else{
//         return 1;
//     }

// }

// int main(){
//     int y;
//     cin>>y;
//     cout<<y<<endl<<fac(y)<<endl;
// }


//// inside claa all callvalue and addres and reference



// #include<iostream>
// using namespace std;
// class data{
//     int a,b,c,d;
//     public:
//     void s1(int a,int b);

//     void s2(int*c,int*d);
//     void s3(int &a,int &b);

// };
// void data::s1(int a1,int b1){
//     int temp;
//     temp=a1;
//     a1=b1;
//     b1=temp;
//     cout<<a1<<b1<<endl;
// }
// int main(){
//     int a,b,c,d;
//     cin >> a >> b >> c;
//     obj.s1(a,b);
//     cout<<a<<b<<endl;
//     obj.s2(&c,&d);
//     cout<<a<<b<<endl;
//     obj.s3(a,b);
//     cout<<a<<b<<endl;
//     return 0;
    
// }




// #include<iostream>
// using namespace std;
// class data{
//     public:
//     void cal(int a=1000, int b=290,int c=5){
//         cout<<a<<endl<<b<<endl<<c<<endl;
//     }

// }d1;
// int main(){
//     d1.cal(12,24,34);
//     d1.cal(100,200);
//     d1.cal(90);
//     d1.cal();
// }









// #include <iostream>
// using namespace std;

// int factorial(int n){
//     return n * factorial(n - 1);
// }

// int main() {
//     int number = 3;
//     cout << "Factorial of " << number << " is " << factorial(number) << endl;
//     return 0;
// }



