#include <bits/stdc++.h>
using namespace std;
int o_to_e(int x)
{  int i=0;
    while(i<32)
    {
        int i_pos = ( x >> i ) & 1;
        int i_1 = (x >> ( i+1 )) & 1;
         
        x = x - ( i_pos << i)  - ( i_1 << ( i+1 ) ) + ( i_pos << ( i+1 ) ) + ( i_1 << i ); 
        i +=2;
    }
    return x;
}
 
int main()
{ int x;
    cin>>x;
    cout<<o_to_e(x);
    return 0;
}
