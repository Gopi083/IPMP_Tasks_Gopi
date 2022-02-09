#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n,t;
 cin>>n;
 
 t=(int)log2(1.0*n);
 int ans=-1;

 if((int)pow(2,t)==n)
 ans=t+1;
 cout<<ans<<endl;
 return 0;
}
