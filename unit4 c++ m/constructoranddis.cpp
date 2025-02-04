// #include<iostream>
// using namespace std;
// class data{
//     char *p;
//     int size;
//     public:
//     data(){
        
//     }

// };
// int main(){


// }



// #include<iostream>
// using namespace std;
// class base{
//     public:
//     base(){
//         cout<<"base  constructor"<<endl;
//         }virtual ~base(){
//             cout<<"base  destructor"<<endl;
//         }
// };

// class derived1:public base{
//     public:
//     derived1(){
//         cout<<"derived1 constructor"<<endl;
//         }
//     ~derived1(){
//         cout<<"derived1 destructor"<<endl;
    
//     }

// };
// int main(){
//     base *b=new derived1();
//     delete b;
//     return 0;
// }














// #include<iostream>
// using namespace std;
// class bc{
//     public:
//     void printbc(){
//         cout<<"  printing msg in baseshow:";
//     }
//     float show(){
//         cout<<" show of baseclass"<<endl;

//         return ;
//     }


// };
// class dc:public bc{
//     public:
//     void printdc(){
//         cout<<"  printing msg in derivide:";
//     }
//     float show(){
//         cout<<" show of diriveclass"<<endl;

//         return ;
//     }


// };

// int main(){
//     bc *bptr;
//     bc base;
//     bptr =&base;
//     cout<<"bptr in base object"<<endl;
//     bptr->show();
//     dc derived1;
//     bptr=&derived1;
//     cout<<"bptr in derived object"<<endl;
//     bptr->show();
//     derived class dc
//     dc*dptr;
//     dptr=&derived1;
//     cout<<"dptr in derived object"<<endl;
//     dptr->showdc();
//     dptr->printdc();
//     cout<<"using ((dc*)bptr)\n";
//     ((dc*)bptr)->show();
//     ((dc*)bptr)->printdc();
// }





// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// class Expression {
// public:
//   virtual double evaluate() = 0; 
// };

// class PowerAB : public Expression {
// private:
//   double a, b;
// public:
//   PowerAB(double a, double b) : a(a), b(b) {}

//   double evaluate() override {
//     return pow(a, b);
//   }
// };

// class PowerBA : public Expression {
// private:
//   double a, b;
// public:
//   PowerBA(double a, double b) : a(a), b(b) {}

//   double evaluate() override {
//     return pow(b, a);
//   }
// };

// int main() {
//   double a, b;
//   cin >> a >> b;

//   PowerAB ab(a, b);
//   PowerBA ba(a, b);

//   cout << fixed << setprecision(2) << ab.evaluate() << endl;
//   cout << fixed << setprecision(2) << ba.evaluate() << endl;

//   return 0;
// }
// ```cpp
// #include <iostream>
// using namespace std;

// class Color {
// public:
//   virtual void paint() = 0;
// };

// class RedPaint : public Color {
// public:
//   void paint() override {
//     cout << "I'm Painting with Red color." << endl;
//   }
// };

// class BluePaint : public Color {
// public:
//   void paint() override {
//     cout << "I'm Painting with Blue color." << endl;
//   }
// };

// // int main() {
// //   char choice;
// //   cout << "Enter your color choice (R/r for Red, B/b for Blue): ";
// //   cin >> choice;

// //   Color *paint;

// //   if (choice == 'R' || choice == 'r') {
// //     paint = new RedPaint();
// //   } else if (choice == 'B' || choice == 'b') {
// //     paint = new BluePaint();
// //   } else {
// //     cout << "Invalid choice!" << endl;
// //     return 0;
// //   }

// //   paint->paint();
// //   delete paint;
// //   return 0;
// // }
// // ```







