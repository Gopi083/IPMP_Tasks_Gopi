#include <iostream>
using namespace std;
int rightmost(int n)
{
    return n & (n-1) ;
}
int main()
{ int n;
  cin>>n;
  cout<<"turn off rightmost set bit of"<< n<< "is"<<rightmost(n);
 return 0;   
}
