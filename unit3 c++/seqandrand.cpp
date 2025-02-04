// #include<iostream>
// #include<fstream>

// using namespace std;
// int main(){
//     char s[30];
//     ofstream fileout;  /// write
//     fstream file; // write and read
//     file.open("hello.cpp",ios::out);
//     fileout<<"hello world";
//     fileout.close();
//     file.open("hello.cpp",ios::in|ios::out);
//     cout<<file.tellg()<<endl;// current postion'
//     cout<<file.tellp()<<endl;
//     file.seekp(6);
//     file.seekg(6);
//     cout<<file.tellg();
//     cout<<file.tellp();
//     file>>s;
//     cout<<s;
// }


//////random
// #include<iostream>
// #include<fstream>
// #include<conio.h>
// using namespace std;
// int main(){
//     fstream ir;
//     ir.open("kom.txt",ios::out|ios::in);///read where reading ptr at  begm
//     ir.seekp(10,ios::cur); // move ptr to 10th position from beg
//     cout<<ir.tellp()<<endl;
//     char p = '@';
//     ir.put(p);
//     cout<<ir.tellg()<<endl;
//     ir.seekg(10,ios::beg); // move ptr to 10th position from beg
//     char name;
//     name=ir.tellg();
//     cout<<name;
//     ir.close();
// }


////creat a file and store ur name with help of file 
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    
    file.open("name.cpp", ios::out | ios::in | ios::trunc); 
    
    string name = "CHANDAN?";
    file << name;
    
    // Move the pointer to the beginning of the file
    file.seekg(0, ios::beg); 
    
    string readName;
    file >> readName;
    
    cout << "Name in file: " << readName << endl;
    
    file.close();
}
