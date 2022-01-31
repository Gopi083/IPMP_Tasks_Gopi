#include <bits/stdc++.h>
using namespace std;

void bubble(int a[],int n)
{ int i,j,flag ;
   for(i=0;i<n-1;i++)
   { flag=0;
       for(j=0;j<n-i-1;j++)
       {
         if(a[j]>a[j+1])
         {
             swap(a[j],a[j+1]);
             flag =1;
         }
       }
      if(flag==0)
      break;
   }
}

int main()
{ int a[20],n,i;
 cin>>n;
 for(i=0;i<n;i++)
 {cin>>a[i];} 
 bubble(a,n);
 for(i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
 return 0;
}
