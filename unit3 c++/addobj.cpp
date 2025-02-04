// #include<iostream>
// #include<fstream>
// using namespace std;
// class teacher{
//     string name;
//     float sal;
//     int uid;
//     public:
//     void in(){
//         cin>>name>>sal>>uid;
//     }
//     void out(){
//         cout<<name<<" "<<sal<<" "<<uid<<endl;
//     }

// };
// int main(){
//     class teacher t1,t2;
//     t1.in();
//     ofstream ff;
//     ff.open("teacher.txt");
//     ff.write((char*)&t1, sizeof(t1));
//     ff.close();
//     ifstream f2;
//     f2.open("teacher.txt");
//     f2.read((char*)&t2, sizeof(t2));
//     t2.out();
//     f2.close();


// }

// ////in array ex: loop
// #include<iostream>
// #include<fstream>
// using namespace std;
// class teacher{
//     string name;
//     float sal;
//     int uid;
//     public:
//     void in(){
//         cin>>name>>sal>>uid;
//     }
//     void out(){
//         cout<<name<<" "<<sal<<" "<<uid<<endl;
//     }

// };
// int main(){
//     class teacher t1[2],t2[2];
//     for(int i=0;i<2;i++){
//         t1[i].in();
//     }
//     ofstream ff;
//     ff.open("teacher.txt");
//     ff.write((char*)&t1, sizeof(t1));
//     {
//         ff.write((char*)&t1[i], sizeof(t1[i]));
//     }
//     ff.close();
//     ifstream f2;
//     f2.open("teacher.txt");
//     for(int i=0;i<2;i++){
//         f2.read((char*)&t2[i], sizeof(t2[i]));
//         t2[i].out();
//     }
//     f2.read((char*)&t2, sizeof(t2));
//     f2.close();


// }


#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
    char name[20];
    int rollno;
    float cgpa;
    public:
    void take();
    void display();
};
void student ::take(){
    cout<<"enter data";
    cin>>name>>rollno>>cgpa;
}
void student ::display(){
    cout<<"enter data";
    cout<<"name: "<<name<<endl;
    cout<<"rollno: "<<rollno<<endl;
    cout<<"cgpa: "<<cgpa<<endl;
}

int main(){
    ofstream f1;
    f1.open("student.txt",ios::app);
    student s1[5],s2[5];
    for(int i=0;i<5;i++){
        s1[i].take();
        f1.write((char*)&s1[i], sizeof(s1[i]));
    }
    f1.close();
}

