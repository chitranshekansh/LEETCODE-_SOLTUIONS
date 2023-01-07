//Program to perform arthimetic operations
#include <iostream>
using namespace std;
int main() {
    int a,b,res;
    char i;
        cout<<"Enter Value 1:";
        cin>>a;
        cout<<"Enter Value 2:";
        cin>>b;
    cout<<"Enter choice:";
    cout<<"Press + for addition\nPress - for subtraction\nPress * for product\nPress / for division\n";
    cin>>i;
    switch(i)
    {
        case '+': 
        res=0;
        res=a+b;
        cout<<res;
        break;
        case '-':
        res=a-b;
        cout<<"Result:"<<res;
        break;
        case '*':
        res=1;
        res=a*b;
        cout<<"Result:"<<res;
        break;
        case '/':
        
        res=a/(float)b;
        cout<<"Result:"<<res;
        break;
        default:cout<<"Wrong Choice";
        
    }

    return 0;
}
