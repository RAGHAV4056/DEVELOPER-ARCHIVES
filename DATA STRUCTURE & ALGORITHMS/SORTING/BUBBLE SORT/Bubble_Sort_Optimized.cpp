// Bubble Sort (Optimized)
// Approach: Compare adjacent elements and swap them if they are in the wrong order.
// Stop early if no swaps occur in a complete pass.
// Time Complexity: O(n^2) in the worst case, O(n) in the best case
// Space Complexity: O(1)
#include<iostream>
using namespace std;
int main()
{int n;
  cout<<"ENTER NUMBER OF ELEMENTS TO BE PRESENT IN ARRAY:-";
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)
   {cout<<"ENTER ELEMENT-";
    cin>>arr[i];}
  cout<<"ORIGINAL ARRAY:-\n";
  for(int i=0; i<n; i++)
    {cout<<arr[i]<<" ";}
  cout<<endl;
 cout<<"SORTED ARRAY:-\n";
  for(int i=0; i<n-1; i++)
    {int flag = 0;
     for(int j=0; j<n-1-i; j++)
      {if(arr[j]>arr[j+1])
        {int temp = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = temp;
         flag = 1;}}
      if(flag==0){break;}}
for(int i=0; i<n; i++)
  {cout<<arr[i]<<" ";}
return 0;}
