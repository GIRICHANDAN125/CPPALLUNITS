// ////file


// #include<iostream>
// #include<fstream>////read and write the file
// #include<string>
// using namespace std;
// int main(){
//     // ofstream f1;///f1 is obj of class ofstream    ////write to file
//     ofstream f1("sectionk23be.cpp",ios::app);////write ///  open with constructio we can use anty one 8 or 9
//     ///ios::out is default mode no change if we dont use the default
//     string  name,fame;
//     cin >> name;
//     f1 << "Name: " << name << endl;
//     f1.close();
//     ifstream f11;///read the file
//     f11.open("sectionk23be.cpp");
//     f11>>fame;
//     cout << "Name1: " << name << endl;
//     f11.close();
//     return 0;
 
// }



////file get and put (read, write   )


// #include<iostream>
// #include<fstream>////read and write the file
// #include<string>
// using namespace std;
// int main(){
//     char name;
//     ofstream f1;
//     f1.open("sept24.cpp");
//     cin >> name;//read from console
//     while (name!='2')
//     {
//         f1 << name; ///write in file
//         cin >> name; /// read from console

//     }
//     f1.close();
    
    
// }
 
///2met
// #include<iostream>
// #include<fstream>////read and write the file
// #include<string>
// using namespace std;
// int main(){
//     char name;
//     ifstream ff;
//     ff.open("sept24.cpp");
//     name=ff.get();//read from console
//     while (name!=EOF)
//     {
//         cout << name; ///write in file
//         name=ff.get(); /// read from console

//     }
//     ff.close();
    
    
// }
//  ///disp onle wowels
// #include<iostream>
// #include<fstream>////read and write the file
// #include<string>
// using namespace std;
// int main(){
//     char name;
//     ifstream ff;
//     ff.open("sept24.cpp");
//     name=ff.get();//read from console
//     while (name!='B')
//     {
//         if(name=='a' || name=='e' || name=='i' || name == 'o' || name == 'u'||name == 'A' || name =='E' || name=='I' || name== 'O' || name == 'U'){
//         cout << name; ///write in file /// FIND VOWELS IN GIVEN NAME
//         name=ff.get(); /// read from console
//         }

//     }
//     ff.close();
    
    
// }

/// NO.OF CONSTANT in file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    char name;
    int count = 0;
    ifstream ff;
    ff.open("sept24.cpp");
    
    if (!ff) {
        cout << "Error opening file" << endl;
        return 1;
    }

    name = ff.get(); // read from file
    while (name != EOF) {
        if (isdigit(name)) {
            count++; // increment count if the character is a digit
        }
        name = ff.get(); // read next character from file
    }
    
    ff.close();
    cout << "Number of constants (digits) in file: " << count << endl;
}
