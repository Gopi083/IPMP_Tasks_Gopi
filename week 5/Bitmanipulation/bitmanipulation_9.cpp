#include <iostream>
using namespace std;

int position(int n)
{
    int m=1,count =1;
    while(!(n & m))
    {
        count++;
        m=m << 1;
    }
  return count ;
}
int main()
{
    int n;
    cin>>n;
    cout<<"position of rightmost set is"<<" "<<position(n);
 return 0;
}
