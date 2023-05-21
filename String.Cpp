#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    char temp;
    int la,lb;
    cin>>a;
    cin>>b;
    la=a.size();
    lb=b.size();
    string c=a+b;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<la<<" "<<lb<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
  
    return 0;
}
