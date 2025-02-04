// // #include<iostream>
// // using namespace std;
// // int main(){
// //     void *y;
// //     int x = 20;
// //     float a=45.67;
// //     char z='k';
// //     y=&x;///// generic ptr can take address of any datatype var
// //     cout<<y<<endl;
// //     cout<<*(int*)y<<__EDG_CONSTEXPR_ENABLED__;
// //     y=&a;
// //     cout<<y<<endl;
// //     cout<<*(float*)y<<endl;
// //     y=&z;
// //     cout<<endl;
// //     cout<<y<<endl;
// //     cout<<*(char*)y;
// // }



// #include<iostream>
// using namespace std;
// int main(){
//     int a=34;
//     int* const ptr=&a; /// constant ptr
//     cout<<ptr<<endl;
//     a=890;
//     cout<<*ptr<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int *p;
//     {
//         int a=10;
//         p=&a;
//         cout<<p<<endl<<*p<<endl;
//     }
//     p=NULL;
//     cout<<*p<<endl;//// dangl9ing ptr here as a is not in scope
//     p=NULL;
//     cout<<p<<endl;///change the pointer
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *a,b=99;
//     int &c=x;
//     a=&b;
//     cout<<b<<endl<<*a<<endl;
//     x=1000;
//     cout<<c<<endl;
//     a=&c;
//     cout<<*a<<endl;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10,y=20;
//     int *ptr=&x;
//     int &ref=y;
//     *ptr++;
//     ref++;
//     cout<<x<<" "<<y<<endl;
//     return 0;
    
    
// }


// #include<iostream>
// using namespace std;
// class data{
//     float a,*b;
//     public:
//     void in(){
//         cin >> a;
//         b=&a;
//     }
//     void out(){
//         cout<<*b<<endl<<a<<endl;
//     }}dd;

//     int main(){
//         dd.in();
//         dd.out();
//         return 0;
//     }


// #include<iostream>
// using namespace std;
// class data{
//     float a,*b;
//     public:
//     void in(){
//         cin >> a;
//         b=&a;
//     }
//     void out(){
//         cout<<*b<<endl<<a<<endl;
//     }}dd,*a1;

//     int main(){
//         dd.in();
//         a1=&dd;
//         (*a1).out();
//         return 0;
//     }

// #include<iostream>
// using namespace std;
// class student{
//     char name[20];
//     float cgpa;
//     public:
//     void take();
//     void out();
// }s1;
// void student::take(){
//     cin>>name>>cgpa;;
// }

// void student::out(){

//     cout<<name<<endl<<cgpa<<endl;
// }
// int main(){
//     student s1[5];//array of size
//     int i;
//     for(i=0;i<5;i++){
//     s1[i].take();
// }
// for(i=0;i<5;i++){
//     s1[i].out();
// }
// }


// #include<iostream>
// using namespace std;
// class student{
//     char name[20];
//     float cgpa;
//     public:
//     void take();
//     void out();
//     void cg();
// }s1;
// void student::take(){
//     cin>>name>>cgpa;;
// }
// void student::cg(){
//     if(cgpa>=90){
//         cout<<"First Class"<<endl;

//     }
//     else if(cgpa>=80){
//         cout<<"Second Class"<<endl;
//     }
//     else if(cgpa>=70){
//         cout<<"Third Class"<<endl;
//     }
//     else{
//         cout<<"lower cgpa"<<endl;
//     }

    
// }

// void student::out(){

//     cout<<name<<endl<<cgpa<<endl;
// }
// int main(){
//     student s1[5];//array of size
//     int i;
//     for(i=0;i<5;i++){
//     s1[i].take();
// }
// for(i=0;i<5;i++){
//     s1[i].out();
// }
// }

