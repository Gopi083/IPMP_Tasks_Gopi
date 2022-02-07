#include <iostream>
using namespace std;
# define size 32
int leftrotate(int a, int x)
{
 return (a << x) | (a >> (size- x));
}
int rightrotate(int x, int d)
{
 return (a>> x) | (a << (size- x));
}   

int main()
{ int n,x;
 cin>>n>>x;
 cout<< leftrotate(n,x)<<endl;
 cout<< rightrotate(n,x)<<endl;
 getchar();
}
