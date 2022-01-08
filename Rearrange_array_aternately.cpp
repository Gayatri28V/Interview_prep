/*Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.*/

#include<iostream>
using namespace std;
class alternate {
  public:
  void alternateArray( vector<int> &arr,int n);
  {
    int low=0;
    int high=n-1;
    while(low<high)
    { 
      cout<<arr[high]<<" "<<arr[low];
      low++;
      high--;
    }
  }
};
int main()
{
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];
   alternate obj;
  obj.alternateArray(arr,n);
}
