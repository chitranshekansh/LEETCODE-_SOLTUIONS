#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student {
    int scores[5];
    
  public:void input()
  {
      for(int i=0;i<5;i++)
       cin>>scores[i];
  }  
  int calculateTotalScore()
  {
      int res=0;
      for(int i=0;i<5;i++)
      {
      res+=scores[i];
      }
      return res;
  }
};

int main() {
