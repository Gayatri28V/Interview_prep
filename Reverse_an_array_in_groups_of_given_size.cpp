/*Given an array, reverse every sub-array formed by consecutive k elements.
Input: 
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9] 
k = 3 
Output: 
[3, 2, 1, 6, 5, 4, 9, 8, 7] */
//asked in adobe

#include<iostream>
using namespace std;
void reverseGrp(int arr[],int n,int k)
{
  for(int i=0;i<n;i+=k)
  {
    int low=i;
    int high=min(i+k-1,n-1);
    while(low<right)
      swap(arr[low++],arr[high--]);
    
  }
}
int main()
{
int n,k,
cin>>n,k;
int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  reverseGrp(arr,n,k)
   for(int i=0;i<n;i++)
   {
     cout<<arr[i]<<" ";
   }
}
