#include <bits/stdc++.h>
using namespace std;

bool powerof_2(int n)
{
    if(n==1)
    return true;
    else if(n%2!=0 ||n==0)
    return false;
    else
    return powerof_2(n/2);
}

int main()
{int n;
cin>>n;
 if (powerof_2(n)==1)
 cout<<"yes";
 else
 cout<<"no";
}
