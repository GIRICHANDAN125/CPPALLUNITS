// #include<iostream>
// using namespace std;
// class student{
//     string name;
//     int roll;
//     float cgpa;
//     public:
//     void in(){
//         cout<<"Enter name, roll and cgpa: ";
//         cin>>name>>roll>>cgpa;
//     }
//     void process(){
//         cout<<"Enter name, roll and cg";
//         cout<< name<<endl<<roll<<endl<<cgpa;
//     }


// };
// int main(){
//     int size;
//     cout<<"Enter the size of array: ";
//     cin>>size;
//     class student *s1;
//     s1=new student[size];/////if we take ptr we wnat use new and delete 
//     for(int i=0;i<size;i++){
//         (s1+i)->in();////// nt under
//         (s1+i)->process();
//     }

// }

////// creat a class whuch is havning a float type of data ehich is already sortded in decreesing order 
// take a number to user to search which is number display the  if number is exist or not
// #include <iostream>
// using namespace std;

// class FloatArray {
//     float* arr;
//     int size;
// public:
//     FloatArray(float* inputArr, int n) {
//         size = n;
//         arr = new float[n];
//         for (int i = 0; i < n; i++) {
//             arr[i] = inputArr[i];
//         }
//     }

//     bool binarySearch(float num) {
//         int left = 0, right = size - 1;
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (arr[mid] == num) return true;
//             if (arr[mid] > num) left = mid + 1;  // right 
//             else right = mid - 1;  //  left 
//         }
//         return false;  // Element not found in array  // return false; // if you want to return false by default  // return false; // if you want to return false by default  // return false; // if you want to return false by default  // return false; // if you want to return false by default  // return false; // if you want to return false by default  // return false; // if you want to return false by default  // return false; //
//     }

//     ~FloatArray() {
//         delete[] arr;
//     }
// };

// int main() {
//     float arr[] = {9.5, 8.3, 7.1, 6.2, 5.4}; // Already sorted in decreasing order
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     FloatArray floatArr(arr, size);
    
//     float num;
//     cout << "Enter number to search: ";
//     cin >> num;
    
//     if (floatArr.binarySearch(num)) {
//         cout << "Number exists in the array" << endl;
//     } else {
//         cout << "Number does not exist in the array" << endl;
//     }

//     return 0;
// }


///convert 3 programs to static to dynamic
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; ++i) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
/// dynamic version of
// #include <iostream>
// using namespace std;

// int main() {
//     int* arr = new int[5]{1, 2, 3, 4, 5};//// ptr * if added we want to add new and delete
//     for (int i = 0; i < 5; ++i) {
//         cout << arr[i] << " ";
//     }
//     delete[] arr;  // Free the dynamically allocated memory
//     return 0;
// }


///static
// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     for (int i = 0; i < 2; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
/// dynamic

// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 2, cols = 3;
//     int** matrix = new int*[rows];
//     for (int i = 0; i < rows; ++i) {
//         matrix[i] = new int[cols];
//     }
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             matrix[i][j] = i * cols + j + 1;
//         }
//     }
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < rows; ++i) {
//         delete[] matrix[i];
//     }
// }

////static
#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    float cgpa;
    public:
    void in(){
        cout<<"Enter the data: ";
        cin>>name>>roll>>cgpa;
    }
    void process(){
        cout<<"Enter the data:";
        cout<< name<<endl<<roll<<endl<<cgpa;
    }
    float res(){
        return cgpa;
    }


};
int main(){
    student s[5];
    int i,j=0;
    for(int i=0;i<5;i++){
        s[i].in();
    }
    float largest = s[0].res();
    for(int i=1;i<5;i++){
        if(s[i].res()>largest){
            largest = s[i].res();
            j = i;
        }
    }
    s[j].process();
    return 0;
 
}