#include<iostream>
using namespace std;
int main(){
    enum days{sun,mon,tue,wed,turs,fri,sat};
    days day1,day2;
    day1 = sun;
    day2 = fri;
    cout<<day1<<"\n"<<day2;
    if(day1>day2){
        cout<<"day1 come after day2";
        
    }
    else{
        cout<<"day2 come after day1";
    }
}
////2 prblm
