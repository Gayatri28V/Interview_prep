/*Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.*/

#include<iostream.h>
using namespace std;
class wave{
  public:
  void convertToWave(vector<int>& arr,int n)
  {
    for(int i=0;i<n;i+=2)
    {
      swap(arr[i],arr[i+1];
    }
  }
};
int main()
{
int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  wave obj;
  ob.convertToWave(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
