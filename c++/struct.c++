#include<iostream>
using namespace std;
struct fan
{
    char comp[20];
    float cost;
} f1,f2;
int main(){
    cin>>f1.comp>>f1.cost;
    cout<<f1.comp<<endl<<f1.cost<<endl;
    cout<<&(f1.comp)<<&(f1.cost);
 }
