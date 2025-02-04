// ///local
// #include <iostream>
// using namespace std;
// int main(){
// int a=100;
// cout<<a<<endl;
// {
//     int a=200;
//     cout<<a<<endl;


// }
// cout<<a<<endl;
// }

///global
#include <iostream>
using namespace std;
int a=30;
int main(){
int a=100;
cout<<a<<endl;
{
    int a=200;
    cout<<::a<<endl;/// :: consider global one / outsider input


}
cout<<a<<endl;
}