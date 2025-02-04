// #include<iostream>
// #include<string.h>
// using namespace std;
// class student{
//     char name[20];
//     float cgpa;
    
//     public:
//     student(){    /// defult constructor
//         cout<<"enter data";
//         cin>>name>>cgpa;
//     }
//     student(char fame[], float marks){/////////parameterised constructer
//         strcpy(name,fame);
//         cgpa=marks;

//     }
//     student(char fame[]){/////////constructer with one argument
//         strcpy(name,fame);
//         cin>>cgpa;
//     }
//     void display(){
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<cgpa<<endl;
//     }
// };
// int main(){
//     class student s1;
//     s1.display();
//     class student s2("John", 3.5);
//     s2.display();
//     class student s3("kcr");
//     s3.display();
//     class student s4;
//     s4=s3;/////////////////////////////cpy consturctor
//     s4.display();
// }



// #include<iostream>
// #include<string.h>
// using namespace std;
// class student{
//     char name[20];
//     float cgpa;
    
//     public:
//     student(){    /// defult constructor
//         cout<<"enter data";
//         cin>>name>>cgpa;
//     }
//     student(student &n1){////copy const
//     strcpy(name,n1.name);
//     cgpa=n1.cgpa;

//     }
    
//     void display(){
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<cgpa<<endl;
//     }
// };
// int main(){
//     class student s1;
//     s1.display();
//     class student s2(s1);
//     s2.display();
    
// }

///multypy constructer
// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// class car_detail{
    
// };
// class car_detail{
//     string company;
//     float cost;
//     public:
//     car_detail(string s1,float c1){
//         company = s1;
//         cost =c1;
        
//     }
//     void dis(){
//         cout<<company<<endl<<cost<<endl;
//     }
// };
// int main() {
//     class car_detail c1;
//     class car_detail c2("honda",2323234);
//     c1=c2;
//     c1.dis();
    
// }



////intilize = do both 
// #include <iostream>
// using namespace std;
// class car_detail{
    
// };
// class car_detail{
//     string company;
//     const float cost;
//     public:
//     car_detail(string s1,float c1){
//         company = s1;
//         cost =c1;
        
//     }
//     void dis(){
//         cout<<company<<endl<<cost<<endl;
//     }
// };
// int main() {
//     class car_detail c1;
//     class car_detail c2("honda",2323234);
//     c1=c2;
//     c1.dis();
    
// }

//// destructor  chatgpt
// #include <iostream>
// using namespace std;

// class Sample {
// public:
//     Sample() {
//         cout << "Constructor called: Object created." << endl;
//     }

//     ~Sample() {
//         cout << "Destructor called: Object destroyed." << endl;
//     }

//     void displayMessage() {
//         cout << "Hello, this is a sample message!" << endl;
//     }
// };

// int main() {
//     Sample obj; 
//     obj.displayMessage();
    
//     return 0;
// }
