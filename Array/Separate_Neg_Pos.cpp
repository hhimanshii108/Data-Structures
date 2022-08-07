// BRUT FORCE  TC-O(nlogn)

#include<algorithm>
vector<int> separateNegativeAndPositive(vector<int> &nums)
{
   sort(nums.begin(),nums.end());
   return nums;
}

// OPTIMIZED    TC-O(logn)

#include<algorithm>
vector<int> separateNegativeAndPositive(vector<int> &nums)
{
    int s=0;
    int e=nums.size()-1;
    int mid=0;
    while(mid<=e)
    {
        if(nums[mid]<0)
        {
            swap(nums[s],nums[mid]);
            mid++;
            s++;
        }
        else if(nums[mid]>0)
        {
            swap(nums[e],nums[mid]);
           e--;
        }
        else
            mid++;
    }
    return nums;
}
