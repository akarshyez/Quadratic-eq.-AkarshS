#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float x1,x2,x3,d;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    if(a!=0)
    {
        d=(b*b)-(4*a*c);
        if(d>0)
        {
            x1=((-b)+sqrt(d)/(2*a));
            x2=((-b)-sqrt(d)/(2*a));
            cout<<"value of x are "<<x1<<x2;
        }
        else if(d==0)
        {
            x1=(-b)/(2*a);
            cout<<"root are real and equal"<<endl;
            cout<<"x="<<x1;
        }
        else
        cout<<"root are imaginary"<<endl;
    }
    
    else
    cout<<"it is not a quatractic equation"<<endl;
    return 0;
}t