// #include<iostream>
// using namespace std;
// class data{
//     public:
//     void multiply(int a, int b){
//         cout<<a*b<<endl;
//     }
//     void multiply(float a1, float b1, float c1){
//         cout<<a1*b1*c1<<endl;
//     }
//     void multiply(char x,char y){
//         cout<<x*y<<endl;
//     }


// };
// int main(){
//     class data dd;
//     dd.multiply(10,20);
//     dd.multiply(10.5,20.5,30.5);
//     dd.multiply('a','b');
//     return 0;

// }
// 1----class whic contain float array
/// write a num fun ro initilize array
/// 2 func is linear search in float array
// //// 3member fun to find 2 largest numbers in float array
// #include<iostream>
// using namespace std;
// class data{
//     float arr[100];
//     public:
//     void taken(){
//         for(int i=0;i<100;i++){
//             cin>>arr[i];
//         }
//     }
//     void linear_search(float p){
//         int pos=-1;
//         for(int i=0;i<100;i++){
//             if(arr[i]==p){
//                 pos=i;
//                 break;
//             }
//         }
//         if(pos==-1){
//             cout<<"not found"<<endl;
//         }else{
//             cout<<"found at position "<<pos<<endl;
//         }
//     }
//     float sec_lar(){
//          {
//             float largest = arr[0];
//             for (int i = 1; i < 100; i++) {
//                 if (arr[i] > largest) {
//                     largest = arr[i];
//                 }
//             }
//             return largest;
//         }
//     }

// };
// int main(){
//     float x;
//     cin >> x;
//     class data dd;
//     dd.taken();
//     dd.linear_search(x);
//     cout << "Second Largest: " << dd.sec_lar() << endl;
//     return 0;

// }


//// find a raise to power b withoutn using build in fun
// #include<iostream>
// using namespace std;

// class data{
//     int a;
//     public:
//     friend fun(class nam,class fam){
//         int ans=1;
//         for(int i=0;i<y;i++){
//             ans=ans*a;
//         }
//         cout << ans << endl;

//     }

// };
// class fam{
//     int b;
//     public:
//     friend fun(class nam,class fam){
//         int ans=1;
//         for(int i=0;i<y;i++){
//             ans=ans*b;
//         }
//         cout << ans << endl;
//     }
// }dd;
// int main(){
//     int x,y;
//     cin >> x >> y;
//     class nam dd;
    


// }























