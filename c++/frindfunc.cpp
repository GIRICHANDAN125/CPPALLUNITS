// #include<iostream>
// using namespace std;
// class data
// {
//     float a,b;////private
//     public:
//     void in() /#///inline function
//     {
//         cin>>a>>b;

//     }
//     friend void fun(data); ///prototypes forfriend

// };

// void fun(data d1)
// {
//     cout<<d1.a*d1.b<<endl;

// }
// int main()
// {
//     data d;
//     d.in();
//     fun(d);/// friend fun called here
//     return 0;
// }

//// using return type

///2
// #include<iostream>
// using namespace std;
// class data
// {
//     float a,b;////private
//     public:
//     void in() ////inline function
//     {
//         cin>>a>>b;

//     }
//     friend float fun(data); ///prototypes forfriend

// };

// float fun(data d1)
// {
//     return((d1.a)*(d1.b));

// }
// int main()
// {
//     data d;
//     d.in();
//     float res=fun(d);/// friend fun called here
//     cout<<res<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class second;
class third;
class first{
    float a;
    public:
    void in()
    {
        cin>>a;
    }
    friend void fun(first,second,third);
};
class second{
    float b;
    public:
    void in()
    {
        cin>>b;
    }
    friend void fun(first,second,third);

};
class third{
    float c;
    public:
    void in()
    {
        cin>>c;
    }
    friend void fun(first,second,third);

};


void fun(first f1,second s1,third c1)
{
    if(f1.a>s1.b){
        cout<<"a is greater: "<<f1.a;
        if(f1.a>c1.c) cout<<", c is smaller";
        else cout<<", c is greater";
    }
    else{
        if(s1.b>c1.c)
        cout<<"b is greater: "<<s1.b;
        else cout<<"c is greater: "<<c1.c;
    }
    // cout<<(f1.a*s1.b)<<endl;
}

int main(){
    first ff;
    second ss;
    third cc;
    ff.in();
    ss.in();
    cc.in();
    fun(ff,ss,cc);

}




















