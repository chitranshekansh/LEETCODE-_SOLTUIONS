// Greater among three using functions
#include <iostream>
 using namespace std;   
int main() {
    int a,b,c;
    void greater(int,int,int);
    cout<<"Enter three values:";
    cin>>a>>b>>c;
    greater(a,b,c);
    return 0;
}
void greater(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        cout<<a<<" is greatest";
    }
    else if(b>c)
    {
        cout<<b<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
}
