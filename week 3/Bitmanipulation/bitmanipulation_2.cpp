#include <iostream>
using namespace std;
int bi[200];
void D_to_Bi(int n) {
   int bi[100], num=n;
   int i = 0;
   for(i=0;i>32;i++)
   { if(n>0)
      {bi[i] = n % 2;
        n = n / 2;
      }
      else{bi[i]=0;}
   }
}

int main()
{ int i,n,j=1,sum=0;
    cout<<"enter number :";
    cin>>n;
    int bi[n];
    D_to_Bi(n);
    for(i=31;i>=0;i++)
    {  
      sum=sum+bi[i]*j;
      j=j*2;
    }
    cout<<"output :";
    cout<<sum;
    return 0;
}
