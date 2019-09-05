#include <bits/stdc++.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{

   for (int i = 0; i < n-1; i++)      
   {
     for(int j=0; j<n-i-1; j++)
     {
        if(arr[j]>arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
     }   
   }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    cout<<arr[i]<<" ";
}
 
int main()
{
    int arr[1000],n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
      cin>>arr[i];
      
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;;
}
