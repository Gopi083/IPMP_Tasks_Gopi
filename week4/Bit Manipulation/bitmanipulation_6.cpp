#include <bits/stdc++.h>
using namespace std;
#define size 8
 
int getAbs(int n)
{
    int const mask = n >> (sizeof(int) * size - 1);
    return ((n + mask) ^ mask);
}
 
int main()
{
    int n;
    cin>>n;
    cout << "Absolute value of " << n << " is " << getAbs(n);
    return 0;
}
