#include <iostream>
using namespace std;

int add(int a,int b)
{
   while(b--)
   {
       a++;
   }
  return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"sum is"<<" "<<add(a,b);
  return 0;
}
