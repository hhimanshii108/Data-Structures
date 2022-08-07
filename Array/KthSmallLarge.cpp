// BRUTE FORCE APPROACH  TC- O(nlong)
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

// PRIORITY QUEUE       TC-O(nlogk)

#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<stdlib.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	vector<int>v;
    priority_queue<int>maxh;
    priority_queue<int>minh;
    for(int i=0;i<n;i++)
    {
        maxh.push(arr[i]);
        minh.push(-(arr[i]));
    
    if(maxh.size()>k)
    {
        maxh.pop();
        minh.pop();
    }
    }
    v.push_back(maxh.top());
    v.push_back(-minh.top());
    return v;
}

