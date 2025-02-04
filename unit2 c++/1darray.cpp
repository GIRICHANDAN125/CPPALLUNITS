// #include<iostream>
// using namespace std;
// class array{
//     float a[7];
//     float sr;
//     public:
//     void input(){
//         for(int i=0; i<7; i++){
//             cin >> a[i];
//         }
//     }
//     int linear(float sr);

// };
// int array::linear(float num){ //// o/s class 
//     int count = 0;
//     for(int i=0; i<7; i++){
//         if(a[i] == num){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     class array ar;
//     ar.input();
//     int res =ar.linear(23);
//     if(res == 0){
//         cout << "Element not found";
//     }
//     else{
//         cout << "Element found " << res << " times";
//     }
//     return 0;

// }
///insertion 1darray
// #include<iostream>
// using namespace std;
// class array{
//     int a[7];
//     int num,pos;
//     public:
//     void input(){
//         for(int i=0; i<7; i++){
//             cin >> a[i];
//         }
//         cin>>num>>pos;
//     }
//     void insert();
// };
// void array::insert(){
//     for(int i=6; i>=pos; i--){
//         a[i+1]=a[i];
//     }
//     a[pos]=num;
//     for(int i=0; i<8; i++){
//         cout<<a[i]<<" ";
//     }

// }

// int main(){
//     class array ar;
//     ar.input();
//     ar.insert();
//     return 0;
// }
//// deletion
// #include<iostream>
// using namespace std;
// class array{
//     int a[7];
//     int num,pos;
//     public:
//     void input(){
//         for(int i=0; i<7; i++){
//             cin >> a[i];
//         }
//         cin>>num>>pos;
//     }
//     void delet();
// };
// void array::delet(){
//     for(int i=1;i<=num-1;i++){
//         cout << a[i] << endl;
//     }
    
// }

// int main(){
//     class array ar;
//     ar.input();
//     ar.delet();
//     return 0;
// }

///binary numbers
#include<iostream>
using namespace std;
class array{
    int a[8];
    int num,pos;
    public:
    void input(){
        for(int i=0; i<7; i++){
            cin >> a[i];
        }
        cin>>num;
    }
    void bsr(){ ///binaerry search
        int beg=0,end=6;
        int mid,count=0;
        mid=(beg+end)/2;
        while(beg<=end){
            if(a[mid]==num){
            count++;
            break;
           }
            else if(a[mid]>num){
                end=mid-1;
                
            }
            else if(a[mid]<num){
                beg=mid+1;
            }
        }
        if (count>0){
            cout << "Element found " << count << " times";
        }
        else{
            cout << "Element not found";
        }
    }
    


};
int main(){
    class array ar;
    ar.input();
    ar.bsr();
    return 0;
}