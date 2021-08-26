/*Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j]
Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required 
condition(A[i] <= A[j]) thus giving 
the maximum difference of j - i 
which is 6(7-1).
Asked in amazon ,microsoft.
*/
#include <iostream>
using namespace std;
int maxIndex(int arr[],int n)
{
    int low=0,high=n-1,ans=0,maxi=0;
    while(low<=high)
    {
        if(arr[low]<arr[high])
        {
            ans=high-low;
            if(ans>maxi)
            {
                maxi=ans;
            }
            low++;
            high=n-1;
        }
        else
        high--;
    }
    return maxi;
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<maxIndex(arr,n);
}
