/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int binarysearch(int[],int,int,int);

int binarysearch(int a[],int f,int l,int num){
    int mid;
    if (l>=f)
    {
        mid=(f+l)/2;
        if(a[mid]==num){
            return mid+1;
        }
        else if(a[mid]<num){
            return binarysearch(a,mid+1,l,num);
        }
        else 
        {
            return binarysearch(a,f,mid-1,num);
        }
    }
    return -1;
}

int main()
{  int b[10]={2,3,8,12,23,44,73};
   int num,posi=-1;
   cout<<"enter the number to search :";
   cin>>num;
   posi= binarysearch(b,0,7,num);
   
   if(posi!=-1)
   {
       cout<<num<<"is found in position: "<<posi;
   }
   else
   {
       cout<<"number not found";
   }
   return 0;
}


