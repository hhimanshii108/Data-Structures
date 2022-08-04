int pivot(vector<int>&arr,int n)
{
    int s=0;
    int e=n-1;
     int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}
int binary(vector<int>&arr,int p,int n,int k)
{
    int s=p;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
            return mid;
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int fp;
   int p=pivot(arr,n);
    if(k>=arr[p] && k<=arr[n-1])
       fp= binary(arr,p,n-1,k);
    else
        fp=binary(arr,0,p-1,k);
    return fp;
}

