/* In this problem we have to find the number of pairs in an array whose difference is divisible by K.
Approach:
1) find the modulous of each alement of an array and store the remainder in the same array.(element of range 0 to k-1)
2) Make a different array of size k with elements 0.
2)store the count of each element of an array in the second array.
3)count the pair whole absolute differemce is divisible by k . */

#include(bits/stdc++.h)
#define ll long long
using namespace std;
class difference
{
public:
ll count_pairs(int arr[],int n,int k)
{
ll count=0;
for(ll i=0;i<n;i++)
arr[i]=(arr[i]+k)%k;
ll arr1[k]={0};
for(ll i=0;i<n;i++)
{
arr1[arr[i]]++;
}
for(ll i=0;i<k;i++)
{count += (arr1[i]*(arr1[i]-1))/2;
}
return count;
}
};
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int k;
cin>>k;
difference obj;
cout<<obj.count_pairs( arr, n, k)<<endl;
}
}
