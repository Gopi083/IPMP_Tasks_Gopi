/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>  
using namespace std;  
int main ()  
{    
    int array[10],size; 
    cout<<"Enter Size of array: "<<endl;
	cin>>size;
	cout<<"Enter "<<size<<" integers of the array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
       
    cout<<"\nInput list is \n";
    for(int i=0;i<size;i++)  
    {  
        cout << array[i]<<"\t";  
    }    
    for(int k=1; k<size; k++)   
    {  
        int temp = array[k];  
        int j= k-1;  
        while(j>=0 && temp <= array[j])  
        {  
            array[j+1] = array[j];   
            j = j-1;  
        }  
        array[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<size;i++)  
    {  
        cout <<array[i]<<"\t";  
    }  
}