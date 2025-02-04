/// 2 typesof arguments using * and adress&& and without  address

// #include<iostream>
// using namespace std;
// void swap(float* a, float* b)//a=&a1,b=&b1b
// {
//     float x;
//     x=*a;
//     *a=*b;
//     *b=x;
//     cout<<*a<<" "<<*b<<endl;
// }
// int main(){
//     float a1,b1;
//     cin>>a1>>b1;
//     swap(&a1, &b1);
//     cout<<"After swapping: "<<a1<<" "<<b1<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void swap(float a, float b)//a=&a1,b=&b1b
// {
//     float x;
//     x=a;
//     a=b;
//     b=x;
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     float a1,b1;
//     cin>>a1>>b1;
//     swap(a1, b1);
//     cout<<"After swapping: "<<b1<<" "<<a1<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
void swap(float a, float b,float c)//a=&a1,b=&b1b
{
    float temp;

    temp = a;
    a = b;
    b = c;
    c = temp;

    cout<<a<<" "<<b<<c<<endl;
}
int main(){
    float a1,b1,c1;
    cin>>a1>>b1,c1;
    swap(a1, b1,c1);
    cout<<"After swapping: "<<a1<<" "<<b1<<c1<<endl;
    return 0;
}
