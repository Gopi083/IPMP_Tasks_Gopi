/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

void quicksort(int a[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(a[i]<=a[pivot]&&i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);

   }
}

int main(){
   int i, count, a[25];

   cout<<" enter num elements are u going to enter: ";
   cin>>count;

   cout<<"Enter "<<count<<" elements" ;
   for(i=0;i<count;i++)
      cin>>a[i];

   quicksort(a,0,count-1);

   cout<<"Order of Sorted elements: ";
   for(i=0;i<count;i++)
      cout<<a[i] <<" ";

   return 0;
}

