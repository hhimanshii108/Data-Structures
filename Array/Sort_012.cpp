// BRUTE FORCE   TC-O(n)

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            c0++;
        else if(arr[i]==1)
            c1++;
        else
            c2++;
    }
    int k=0;
    for(int i=0;i<c0;i++)
    {
        arr[k]=0;
        k++;
    }
     for(int i=0;i<c1;i++)
    {
        arr[k]=1;
         k++;
    }
     for(int i=0;i<c2;i++)
    {
        arr[k]=2;
         k++;
    }
    
}

//OPTIMIZED APPROACH   TC-0(logn)

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int s=0;
    int e=n-1;
    int mid=0;
    while(mid<=e)
    {
        if(arr[mid]==0)
        {
            swap(arr[s],arr[mid]);
            s++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[e],arr[mid]);
            e--;
        }
    }
  
}
