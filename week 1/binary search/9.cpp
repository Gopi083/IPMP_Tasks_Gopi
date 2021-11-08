/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void merge ( int A[] , int B[] , int n , int m )
{
    int C[n + m];
    int i , j;
    i = j = 0;
    int k = 0;
    
    while ( i < n || j < m )
    {
        if( A[i] <= B[j] )
        {
            C[k++] = A[i++];
        }
        else
            C[k++] = B[j++];
    }
    
    if( i == n )
        while( j < m )
            C[k++] = B[j++];
    else 
        while( i < n )
            C[k++] = A[i++];
            
    cout<<"\nmerged Array is \n";
    
    for( i = 0 ; i < k ; i++)
        cout<<C[i]<<endl;
    
}
int main()
{
    int A[20], B[20];
    int m , n;
    
    cout<<"Enter Number of elements for first array : ";
    cin>>n;
    cout<<"Enter first sorted array :\n";
    for(int i = 0 ; i < n ;  i++)
    cin>>A[i];
    
    cout<<"Enter Number of elements for second array : ";
    cin>>m;
    cout<<"Enter second sorted array :\n";
    for(int i = 0 ; i < m ;  i++)
    cin>>B[i];
    
    merge( A , B , n , m );
    
}