// Insertion Sort (Array)
// Approach: Take each element and insert it into its correct position
// in the already sorted portion of the array.
// Time Complexity: O(n^2) in the worst case, O(n) in the best case
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
  for(int i=1; i<n; i++)
    {int x = arr[i];
     int j = i-1;
     while(j>-1 && arr[j]>x)
       {arr[j+1] = arr[j];
        j--;}
     arr[j+1] = x;}
  for(int i=0; i<n; i++)
    {cout<<arr[i]<<" ";}
 return 0;}
