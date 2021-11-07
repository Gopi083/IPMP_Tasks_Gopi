/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ;
void merge_sort(int i, int j, int a[], int b[]) {
    if (j <= i) {
        return;
    }
    int mid = (i + j) / 2;

    merge_sort(i, mid, a, b);
    merge_sort(mid + 1, j, a, b);

    int pointer_left = i;
    int pointer_right = mid + 1;
    int k;

    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {
            b[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) {
            b[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {
            b[k] = a[pointer_left];
            pointer_left++;
        } else {
            b[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++) {
        a[k] = b[k];
    }
}

int main() {
  int a[100], b[100], n, i, d, swap;

  cout<< "Enter number of elements in the array:";
  cin>>n;
  cout<<"Enter"<<n<<" integers ";
  for (i = 0; i < n; i++){
  cin>>a[i];
  }
  merge_sort(0, n - 1, a, b);
  cout<<"Printing the sorted array:";
  for (i = 0; i < n; i++)
  {
     cout<< a[i]<<" ";
}
  return 0;
}
