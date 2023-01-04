
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Value:"<<endl;
    cin>>a;
    cout<<"a="<<a<<endl;
    cin>>b;
    cout<<"b="<<b<<endl;
    cin>>c;
    cout<<"c="<<c<<endl;
    if(a>b&&a>c)
    cout<<"a is largest";
    else if(b>c)
    cout<<"b is largest";
    else
    cout<<"c is largest";

    return 0;
}
