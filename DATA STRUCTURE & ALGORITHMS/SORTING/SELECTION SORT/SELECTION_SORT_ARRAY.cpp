// Selection Sort
// Approach: Find the minimum element in the unsorted portion and swap it with the first element of that portion using pointers
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include<iostream>
using namespace std;
int main()
{int n;
  cout<<"ENTER NUMBER OF ELEMENTS TO BE PRESENT IN ARRAY :-";
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
    {cout<<"ENTER ELEMENT:-";
     cin>>arr[i];}
  cout<<"ORIGINAL ARRAY:-\n";
  for(int i=0; i<n; i++)
    {cout<<arr[i]<<" ";}
  cout<<endl;
  cout<<"SORTED ARRAY IS:-\n";
  int *a, *b;
  for(int i=0; i<n-1; i++)
    {a = &arr[i];
     b = &arr[i];
     for(int j=i+1; j<n; j++)
       {if(arr[j]<*b)
         {b = &arr[j];}}
        int temp = *a;
        *a = *b;
        *b = temp;}
  for(int i=0; i<n; i++)
    {cout<<arr[i]<<" ";}
 return 0;}
