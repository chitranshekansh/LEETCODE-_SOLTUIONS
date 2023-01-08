// Factorial using recursion
#include <iostream>
 using namespace std;   
int main() {
    int n;
    cin>>n;
    int fact(int);
    int res=fact(n);
    cout<<"Factorial:"<<res;
   
    return 0;
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
    return n*fact(n-1);
    }
    
}
