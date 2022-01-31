#include <iostream>
using namespace std;
void heapify(int a[], int n, int i)
{
    int lar = i; 
    int l = 2 * i ; 
    int r = 2 * i + 1; 
 
    if (l <= n && a[l] > a[lar])
        lar = l;
    if (r <= n && a[r] > a[lar])
        lar = r;
    if (lar != i)
    {
        swap(a[i], a[lar]);
        heapify(a, n, lar);
    }
}
 
void heap_sort(int a[], int n)
{ int i;
    for(i=n/2;i>0;i--)
        heapify(a, n, i);
    for(i=n;i>0;i--)
    {
        swap(a[1], a[i]);
        heapify(a, i-1, 1);
    }
}
 
int main()
{ int i,n,a[20];
  cin>>n;
  for(i=1;i<=n;i++) 
  {cin>>a[i];}
  heap_sort(a,n);
  for(i=1;i<=n;i++)
  {
    cout<<a[i]<<" ";
  }
}
