/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int Binary_search(int A[] , int first , int last )
{
   
    int mid;
    mid = ( first + last )/2;
    if( A[mid] == 0 && A[mid + 1] == 1 )
    return mid + 1;
    else if( A[mid] == 1 && A[mid - 1] == 0 )
    return mid;
    else if( A[mid] == 1 && A[mid - 1] == 1 )
    last = mid - 1;
    else if( A[mid] == 0 && A[mid + 1] == 0 )
    first = mid + 1;
    return Binary_search ( A , first , last );
    
}

int Search(int A[] , int n )
{
    int i , j ;
    i = 0;
    j = 1;
    if( A[j] != 1 )
    {
        i = j;
        j = 2*j;
    }
    
    return Binary_search( A , i , j );
    
}
int main()
{
    int n,i;
    int arr[20];
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter Sorted Binary Number array :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    i = Search(arr, n );
    cout<<"\nFirst Occurence of 1 is at index "<<i;

}