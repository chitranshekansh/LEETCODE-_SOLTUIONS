#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int num;
    cin>>num;
    vector<int>v(num);
    for(int i=0;i<=num;i++)
    {
    cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
     {   
     cout<<v[i]<<" ";
     }
    return 0;
}
