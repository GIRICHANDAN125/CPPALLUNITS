#include<iostream>
using namespace std;
class pen
{
    int cost;
    char comp[20];
    char cat[20];
    public:
    inline void in();
    void process()////inline
    {
        cost = cost*.10;

    }

    void out();///non inline    
};
void pen::in()
{
    cin>>cost>>comp>>cat;
}
void pen::out()
{
    cout<<comp<<endl<<cost<<endl<<cat<<endl;;
}
int main(){
    class pen p1,p2;
    p1.in();
    p1.process();
    p1.out(); 

}