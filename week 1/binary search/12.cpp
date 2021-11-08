/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int Binary_search(int A[] , int first , int last , int key)
{
   
    int mid;
    while( last - first > 1)
    {
        mid =  first + last/2;
        if( A[mid] < key )
        first = mid ;
        else
        last = mid ;
        
    }
    
    if(A[last] == key)
    return last;
    if(A[first] == key)
    return first;
    else
    return -1;
}
int Pivot(int A[] , int f , int l )
{
    int m;
    m = (f + l)/2;
    
    if(A[f]>A[m])
    l = m;
    else if (A[f]<A[m])
    f = m;
    
    else if(A[m]>A[m+1])
    return m;
    else if(A[m]<A[m-1])
    return m-1;
    
    return Pivot(A , f , l);
    
}
int Search(int A[] , int n )
{
    int pivot;
    if(A[0]<A[n-1])
    pivot = -1;
    else
    pivot = Pivot(A , 0 , n - 1 );
    
    if(pivot == -1)
    return 0;
    else
    return pivot + 1;
}
int main()
{
    int n,i;
    int arr[20];
    int key;
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter elements (Pivoted sorted array ) :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    i = Search(arr, n );
    cout<<"Minimum Element is "<<arr[i];
    
    
}