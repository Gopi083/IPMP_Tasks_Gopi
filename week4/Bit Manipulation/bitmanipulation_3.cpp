#include <iostream>
using namespace std;
int bi[200];
int D_to_Bi(int n) {
   int bi[100];
   int i = 0,count=0;
    while(n>0)
      {
        bi[i] = n % 2;
        n = n / 2;
        if(bi[i]==1)
        {
            count+= 1;
        }
        i++;
      }
 return count;
}

int main()
{ int i,n,j=1,sum=0;
    cout<<"enter number :";
    cin>>n;
    cout<<D_to_Bi(n);
    return 0;
}
