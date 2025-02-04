// #include<iostream>
// using namespace std;
// int main(){
//     float x,y;
//     char n;
//     cin >> x >> y;
//     try{
//         if(y==0){
//             throw n;
//         else
//             cout<<x/y;

//         }
//         catch(float){
//             cout<<"you have entered 0 in divisor carefull";
//         }
//     }
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int a[5]={1,2,3,4,5};
//     try{
//         int i=0;
//         while(1){
//             cout<<a[i]<<endl;
//             i++;
//             if(i>=5)
//                 throw i;
//         }
//     }
//     catch(int j){
//         cout<<"array of bounds "<<j<<endl;
//     }
//     return 0;
// }


// ///// in user defined fun
// #include<iostream>
// using namespace std;
// void fun(){
//     int a,b,n;
//     cin >> a >> b ;

//     if(a==0||b==0)//abnormal{
//     {
//         throw n;

//     }
//     else {
//         cout << a*b << endl;
//     }

// }
// int main(){
//     try{

        
//     fun();
//     fun();}
//     catch(int ){
//         cout<<"you have entered 0 in the divisor";
//     }

// }


// //// prime or not
// #include<iostream>
// using namespace std;
// void fun(){
//     int n;
//     cin >> n;
//     if(n % 2 == 0){
//         throw n;
//         cout << "The number is not prime" << endl;
//     }
//     else {
//         cout << "The number is prime" << endl;
//     }
// }
// int main(){
//     try{
//         fun();
//     }
//     catch(int i){
//         cout << "The number " << i << " is not prime" << endl;
//     }
//     return 0;

//}

#include<iostream>
#include<math.h>
using namespace std;
void fun(){
    int a,b;
    cin >> a >> b;
    int c;
    c= a*b;
    if(pow(c,2)){
        throw a;
    }
    else{
        cout << "The number is exception" << endl;
    }
}
int main(){
    try{
        fun();
    }
    catch(int i){
        cout << "The number " << i << " is invalid" << endl;
    }
}


// ////multiple catch
// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     int a,b;
//     char p;
//     try{
//         cin>>a>>b;
//         if(a<=0){
//             throw x;
//         }
//         else if(b<=0){
//             throw p;
//         }
//         else{
//             cout<<a*b;
//         }

//         }
//         catch(char){
//             cout<<"0 not allowed"<<endl;
//         }
//         catch(int){
//             cout<<"-ve  allowed";
//         }
// }


////multiple catch and generic

// #include<iostream>
// using namespace std;
// int main(){
//     float x,p;
//     int q,r;
//     cin>>x;
//     try{
//         if(x<=1000){
//             throw p;
//         }
//             else if (x>1000 && x<=2000)
//             {
//throw q;
//             }
//             else if (x>2000&&x<=3000){
//                 throw r;
//             }
//     }
//     catch(int){
//         cout<<"tax is 20 per";
//     }
//     catch(float){
//         cout<<"no tax on this sal";

//     }
//     catch(char){
//         cout<<"tax is 10 per";
//     }
//     catch(...){/////generic(...) only 3 dots for generic
//         cout<<"tax is 30 per";
//     }
// }


// #include<iostream>
// #include<string>
// #include<conio.h>
// using namespace std;
// class error{
//     int *err_code;
//     char *err_desc;
//     public:
//     error(int c, char *d){
//         err_code=c;
//         err_desc=new char[strlen(d)];
//         strcpy(err_desc,d);
//     }
//     void err_display(){
//         cout<<"Error Code: "<<*err_code<<endl;
//         cout<<"Error Description: "<<err_desc<<endl;
    

// }
// };
// int main(){
//     try{
//         cout<<"press and key";
//         getch();
//         throw error(99,"test exception");
//         }
//     catch(error e){
//         cout<<"Exception caught";
//         e.err_display();
//     }
//     getch();
//     return 0;

// }



// ///retrow
// #include<iostream>
// using namespace std;
// void  fun(){
//     int a,b,p;
//     cin>>a>>b;
//     try{
//         if(a<0 || b<0){
//             throw p;
//         }
//         else{
//             cout<<a+b<<endl;
//         }
//     }
//     catch(int){
//         throw;///retrow
//     }
// }

// int main(){
//     try{
//         fun();
//     }
//     catch(int){
//         cout<<"handle in main";
//     }
//     return 0;

// }



// #include<iostream>
// using namespace std;
// class ref{
//     public:
//     int x;
//     ref *srefer;
//     ref(int a):srefer(nullptr),x(a){}

// };
// void print (ref *b){
//     if( b == nullptr )///terminate {
//     return;
//     do{
//         cout<<b->x<<endl;
//     }while((b= b->srefer));//// iteratte
// }
// int main(){
//     ref x(10),y(20),z(30),w(100),a(100),c(90),m(77),k(125);
//     x.srefer=&y;
//     y.srefer=&z;
//     z.srefer=&w;
//     w.srefer=&a;
//     a.srefer=&c;
//     c.srefer=&m;
//     m.srefer=&k;
//     print(&x);
//     return 0;
// }                 