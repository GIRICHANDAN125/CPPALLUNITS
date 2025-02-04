// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     cout<<v1.size();
//     v1.push_back(100);
//     v1.push_back(200);
//     v1.push_back(300);
//     v1.push_back(400);
//     v1.push_back(500);
//     v1.pop_back();
//     v1.pop_back();
//     cout<<v1.size();
//     vector<int>::iterator i1;
//     for(i1=v1.begin();i1!=v1.end();i1++){
//         cout<<*i1<<" "<<endl;
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     cout<<v1.size();
//     v1.push_back(34);
//     v1.push_back(99);
//     v1.push_back(100);
//     v1.push_back(99);
//     v1.push_back(340);
//     v1.push_back(990);
//     v1.push_back(1000);
//     cout<<v1.size()<<endl;//7
//     for(vector<int>::iterator  n1=v1.begin();n1!=v1.end();n1++){
//         cout<<*n1<<" "<<endl;
//     }
//     v1.pop_back();
//     v1.pop_back();
//     v1.pop_back();
//     v1.pop_back();
//     ///v1.clear();
//     cout<<"new size is: ";
//     cout<<v1.size()<<endl;
//     cout<<"entered data is:";
//     for(vector<int>::iterator  n1=v1.begin();n1!=v1.end();n1++){
//         cout<<*n1<<" ";
    
//     }
// }





// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>n1(8);
//     cout<<"old  vector size is : "<<n1.size()<<endl;
//     for(int i=0;i<n1.size();i++){
//         n1[i]=i+1;
// }
//     for(int i=8;i<15;i++){
//         n1.push_back(i+4);
// }
//     cout<<"new vector size is : "<<n1.size()<<endl;
//     n1.pop_back();//// 4 element w
//     n1.pop_back();
//     n1.pop_back();
//     n1.pop_back();
//     for(int i=0;i<n1.size();i++){
//         cout<<n1[i]<<" "<<endl;
//     }
// }






// //// //////list //////////////////////


// #include<iostream>
// #include<list>///// std
// using namespace std;
// int main(){
//     list<float>v1;
//     list<float>v2;
//     cout<<v1.size();
//     v1.push_back(100);
//     v1.push_front(99);
//     v1.push_back(500);
//     v1.push_front(990);
//     v1.push_front(8);
//     v2.push_front(-66);
//     v2.push_back(-88);
//     v1.push_front(99);
//     cout<<v1.size()<<endl;
//     for(list<float>::iterator  n1=v1.begin();n1!=v1.end();n1++){
//         cout<<*n1<<" "<<endl;
//     }
//     v1.sort();
//     cout<<"after sorting: ";
//     for(list<float>::iterator  n1=v1.begin();n1!=v1.end();n1++){
//         cout<<*n1<<" ";   
// }
//     v1.reverse();
//     cout<<"\nafter reversing: ";
//     for(list<float>::iterator  n1=v1.begin();n1!=v1.end();n1++){
//         cout<<*n1<<" ";
// }
//     v1.merge(v2);
//     cout<<"\nafter merging: ";
//     for(list<float>::iterator  n1=v1.begin();n1!=v1.end();n1++){
//         cout<<*n1<<" ";
// }


// }





// //// //////list //////////////////////
// #include<iostream>
// #include<list>///// std
// using namespace std;

// void display(list<int> &l){
//     list<int>::iterator p;
//     for(p = l.begin(); p != l.end();p++){
//         cout<< *p << " "<<endl;
//     }
// }
// int main(){
//     list<int>list1;
//     list<int>list2(5);
//     for(int i=0;i<3;i++){
//         list1.push_back(i);
//         cout<<"displaying first list: ";
//         display(list1);
//         list<int>:: iterator p;
//         for(p = list2.begin(); p != list2.end();p++)
//         {
//             *p=1;
//             cout<<"displaying second list: ";
//             display(list2);
//             list<int>::iterator p;
//             for(p = list2.begin(); p != list2.end();){
//                 *p=1;
//                 cout<<"pushing element at front: ";
//             }
//             list1.push_front(100);
//             display(list1);
//             cout<<"poping element from front:";
            
//             list2.pop_front();
//             display(list2);
//             cout<<"sorting element from front:";
//             list2.sort();
//             display(list2);
//             cout<<"merging list";
//             list1.merge(list2);
//             list1.reverse();
//             display(list1);
//             cout<<"reversed merged list";
            
//         }
        

//     }
// }



#include<iostream>
using namespace std;

class depertment{
    int pid;
    int exp;
    depertment *d;
    public:
    professor(int a,int b,depertment*d){

    }
    ~professor(){
        cout<<"professor class destructor."<<endl;

    }


};
int main(){
    depertment d;
    {
        professor p(1,2,&d);
    }
    cout<<"professor at this point  delete but dep is still."<<endl;

}


