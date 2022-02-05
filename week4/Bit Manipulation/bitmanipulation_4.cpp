#include <iostream>
using namespace std;
int countFlips(int a, int b)
{
  int count = 0;
  while(a > 0 || b > 0){
 
    int t1 = (a&1);
    int t2 = (b&1);
 
    if(t1!=t2){
      count++;
    }
    a>>=1;
    b>>=1;
  }
 
  return count;
}
 
int main () {
  int a,b;
  cin>>a>>b;
  cout <<countFlips(a, b);
}
