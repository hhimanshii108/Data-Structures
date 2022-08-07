// BRUTE FORCE APPROACH
#include<algorithm>
#include<iostream>
#include<vector>
#include<stdlib.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	vector<int>v;
    sort(arr.begin(),arr.end());
    int min=arr[k-1];
    int max=arr[n-k];
    v.push_back(min);
    v.push_back(max);
    return v;
}
