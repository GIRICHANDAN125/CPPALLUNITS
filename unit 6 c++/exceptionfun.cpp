// #include<iostream>
// using namespace std;
// template<class n>
// void fun(n n1,n n2){
//     cout<<(n1>n2?n1:n2)<<endl;

// }
// int main(){
//     fun<int>(10,-20);
//     fun<char>('a','c');
//     fun<float>(2.9,9.8);
// }


// #include<iostream>
// using namespace std;
// template<class t>
// t min1(t a,t b,t c){
//     return (a<b?b<c?a:b:c);
// }
// int main(){
//     int x,y,z;
//     float p,q,r;
//     cout<<"enter integer value";
//     cin>>x>>y>>z;
//     cin>>p>>q>>r;
//     cout<<"minimum integer value is "<<min1<int>(x,y,z)<<endl;
//     cout<<"minimum float value is "<<min1<float>(p,q,r)<<endl;

// }



// #include<iostream>
// using namespace std;
// template<class n,class m,class p>
// void fun(n n1,m m1,p p1){
//     cout<<n1<<" "<<m1<<" "<<p1<<endl;
// }
// int main(){
//     fun<int,int,char>(2,3,'r');
//     fun<float,int,char>(1.2,3,'c');
//     fun<>('a','b',1.2);
// }




// #include<iostream>
// using namespace std;
// template<class n,class m>
// n fun(n n1[],m m1){
//     n sum=0;
//     for(int i=0;i<m1;i++){
//         sum+=n1[i];
//     }
//     return sum;
// }
// int main(){
//     int x[5]={1,2,3,4,5};
//     cout<<fun<int,int>(x,5)<<endl;
//     float y[3]={2.1,3.4,5.6};
//     cout<<fun<float,int>(y,3)<<endl;


// }







// #include<iostream>
// using namespace std;
// #define MAX 5;
// template<class a>
// a sum(a n1[]){
//     a total=0;
//     for(int i=0;i<MAX;i++){
//         total+=n1[i];
//     }
//     return total;
// }
// template<class type>
// void read(type a[]){
//     for(int i=0;i<MAX;i++){
//         cin>>a[i];
//     }
// }
// int main(){
//     int arr[5];
//     float arr1[5];
//     read<int>(arr);
//     read<float>(arr1);
//     cout<<"Sum of integer array is "<<sum<int>(arr)<<endl;
//     cout<<"Sum of float array is "<<sum<float>(arr1)<<endl;
//     return 0;
 
// }




// #include<iostream>
// using namespace std;
// void fun(int x){///fun1
// cout<<x<<endl;
// }
// template<class n,class m>
// void fun(m m1){///fun2
// cout<<"i am in temple"<<m1<<endl;
// }
// template<class a ,class b>
// void fun(a a1,b b1){////fun3
// cout<<a1<<" "<<b1<<endl;
// }
// int main(){
//     fun<int,float>(10.5);
//     fun(10,20);
//     fun('a','b');
//     return 0;

// }


///// write a fun template which will take array an argument with find largest and samallest disllay the array

#include<iostream>
using namespace std;

template <class a, size_t N>
void min(a arr[N]) {
    a minVal = arr[0];
    a maxVal = arr[0];
    for (size_t i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (size_t i = 1; i < N; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Smallest element: " << minVal << endl;
    cout << "Largest element: " << maxVal << endl;
}

int main() {
    int intArray[] = {1,2,3,4,5};
    float floatArray[] = {3.5, 7.2, 1.3, 5.8, 9.1};
    min<int, 5>(intArray);
    min<float, 5>(floatArray);
    return 0;
}
