// ///new and dwlwte
// #include<iostream>
// using namespace std;
// int main(){
//     float *p;
//     p=new float;
//     *p=23.456;
//     cout<<*p<<endl
//     ;
//     delete p;
//     cout<<*p<<endl;
// }

///many varaiable
/// sum of float arrray of dynamic type
// #include<iostream>
// using namespace std;
// int main(){
//     int *p,sum=0;
//     int size;
//     cin >> size;
//     p=new int[size];
//     for(int i=0;i<size;i++){
//         cin >> *(p+i);
//         sum=sum+*(p+i);
//     }
//     cout<<sum<<endl;
//     delete []p;
// }

///character
// #include<iostream>
// using namespace std;
// int main(){
//     char *p;
//     int size;
//     cin >> size;
//     p=new char[size];
//     for(int i=0;i<size;i++){
//         cin >> *(p+i);
//         cout<<*(p+i)<<endl;
//     }
    
//     delete []p;
// }




// #include<iostream>
// using namespace std;

// int main() {
//     char *p;
//     int size, vowelCount = 0;
//     cin >> size;
//     p = new char[size];

//     for(int i = 0; i < size; i++) {
//         cin >> *(p + i);
//         char ch = *(p + i);
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vowelCount++;
//         }
//     }
//     cout << vowelCount << endl;
    
//     delete []p;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class first{
//     float a,*b;
//     int size;
//     public:
//     void in(){
//         cin >> size;
//         b= new float[size];
//         for(int i=0;i<size;i++){
//             cin >> *(b+i);
//         }
//     }
//     void procese(){
//         for(int i=size-1;i>=0;i--){
//             cout<<*(b+i)<<" ";
//         }

//     }
// };
// int main(){
//     first obj;
//     obj.in();
//     obj.procese();
//     return 0;
// }